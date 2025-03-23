// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
    struct Node* prev;
} node;

void print_forward(struct Node* head) {
    node* tmp = head;
    
    while(tmp != NULL) {
        printf("%d ", tmp->data);
        tmp = tmp->next;
    }
    printf("\n");
}

void print_backward(struct Node* tail) {
    node* tmp = tail;
    
    while(tmp != NULL) {
        printf("%d ", tmp->data);
        tmp = tmp->prev;
    }
    printf("\n");
}

int doubly_size(struct Node* head) {
    node* tmp = head;
    
    int cnt = 0;
    while(tmp != NULL) {
        cnt++;
        tmp = tmp->next;
    }
    return cnt;
}

void insert_at_head(struct Node** head, struct Node** tail, int val) {
    node* newNode = (node *)malloc(sizeof(node));
    newNode->prev = NULL;
    newNode->next = NULL;
    newNode->data = val;
    
    if(*head == NULL) {
        *head = newNode;
        *tail = newNode;
        return;
    }
    
    (*head)->prev = newNode;
    newNode->next = *head;
    *head = newNode;
}

void insert_at_end(struct Node** head, struct Node** tail, int val) {
    node* newNode = (node *)malloc(sizeof(node));
    newNode->next = NULL;
    newNode->prev = NULL;
    newNode->data = val;
    
    if(*tail == NULL) {
        *head = newNode;
        *tail = newNode;
        return;
    }
    
    newNode->prev = *tail;
    (*tail)->next = newNode;
    *tail = newNode;
}

void insert_at_any_idx(struct Node** head, struct Node** tail, int idx, int val) {
    node* newNode = (node *)malloc(sizeof(node));
    newNode->prev = NULL;
    newNode->next = NULL;
    newNode->data = val;
    
    int sz = doubly_size(*head);
    if(idx < 0 || idx > sz) {
        return;
    }
    
    if(idx == 0) {
        insert_at_head(head, tail, val);
        return;
    }
    if(idx == sz) {
        insert_at_end(head, tail, val);
        return;
    }
    
    node* tmp = *head;
    for(int i = 0; i < idx-1; i++) {
        tmp = tmp->next;
    }
    
    newNode->next = tmp->next;
    newNode->prev = tmp;
    tmp->next->prev = newNode;
    tmp->next = newNode;
}

void delete_at_head(struct Node** head, struct Node** tail) {
    if(*head == NULL) {
        return;
    }
    node* delNode = *head;
    *head = (*head)->next;
    free(delNode);
    
    if(*head == NULL) {
        *tail = NULL;
        return;
    }
    else {
        (*head)->prev = NULL;
    }
}

void delete_at_tail(struct Node** head, struct Node** tail) {
    if(*tail == NULL) {
        return;
    }
    node* delNode = *tail;
    *tail = (*tail)->prev;
    free(delNode);
    
    if(*tail == NULL) {
        *head = NULL;
        return;
    }
    else {
        (*tail)->next = NULL;
    }
}

void delete_at_any_idx(struct Node** head, struct Node** tail, int idx) {
    node* tmp = *head;
    
    int sz = doubly_size(*head);
    if(idx < 0 || idx >= sz) {
        return;
    }
    if(idx == 0) {
        delete_at_head(head, tail);
        return;
    }
    if(idx == (sz-1)) {
        delete_at_tail(head, tail);
        return;
    }
    
    for(int i = 0; i < idx-1; i++) {
        tmp = tmp->next;
    }
    
    node* delNode = tmp->next;
    tmp->next = tmp->next->next;
    if(tmp->next != NULL) {
        tmp->next->prev = tmp;
    }
    free(delNode);
}

void insert_after_val(struct Node** head, struct Node** tail, int target, int val) {
    node* newNode = (node *)malloc(sizeof(node));
    newNode->next = NULL;
    newNode->prev = NULL;
    newNode->data = val;
    
    node* tmp = *head;
    while(tmp != NULL && tmp->data != target) {
        tmp = tmp->next;
    }
    
    if(tmp == NULL) {
        return;
    }
    
    newNode->next = tmp->next;
    newNode->prev = tmp;
    if(tmp->next == NULL) {
        *tail = newNode;
    }
    else {
        tmp->next->prev = newNode;
    }
    tmp->next = newNode;
}

void delete_at_mid(struct Node** head, struct Node** tail, int target) {
    node* tmp = *head;
    
    while(tmp != NULL && tmp->data != target) {
        tmp = tmp->next;
    }
    
    if(tmp == NULL) {
        return;
    }
    
    if(tmp == *head) {
        delete_at_head(head, tail);
        return;
    }
    
    if(tmp == *tail) {
        delete_at_tail(head, tail);
        return;
    }
    
    tmp->prev->next = tmp->next;
    tmp->next->prev = tmp->prev;
    
    free(tmp);
}

int main() {
    node* head = NULL;
    node* tail = NULL;
    
    insert_at_head(&head, &tail, 5);
    insert_at_head(&head, &tail, 15);
    insert_at_end(&head, &tail, 10);
    insert_at_end(&head, &tail, 20);
    insert_at_any_idx(&head, &tail, 2, 50);
    delete_at_head(&head, &tail);
    delete_at_tail(&head, &tail);
    delete_at_any_idx(&head, &tail, 1);
    
    print_forward(head);
    print_backward(tail);
    
    return 0;
}