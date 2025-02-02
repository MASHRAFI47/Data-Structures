#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* next, *prev;
} node;

void insert_at_end(node **head, node **tail, int val) {
    node *newNode = (node *)malloc(sizeof(node));
    newNode->data = val;
    newNode->next = NULL;
    newNode->prev = NULL;
    
    if(*head == NULL) {
        *head = newNode;
        *tail = newNode;
        return;
    }
    
    newNode->prev = *tail;
    (*tail)->next = newNode;
    *tail = newNode;
}

void print_list(node* head) {
    node* tmp = head;
    while(tmp != NULL) {
        printf("%d ", tmp->data);
        tmp = tmp->next;
    }
}

void print_backward(node *tail) {
    node *tmp = tail;
    while(tmp != NULL) {
        printf("%d ", tmp->data);
        tmp = tmp->prev;
    }
}
 
int main() {
    node *head = NULL;
    node *tail = NULL;
    
    insert_at_end(&head, &tail, 10);
    insert_at_end(&head, &tail, 20);
    print_list(head);
    print_backward(tail);
}