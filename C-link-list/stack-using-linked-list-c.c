#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct Node {
    int data;
    struct Node* next;
} node;
node* top = NULL;

bool isEmpty() {
    return top == NULL;
}

void push(int val) {
    node* newNode = (node *)malloc(sizeof(node));
    if(newNode == NULL) {
        printf("Stack Overflow");
        exit(1);
    }
    newNode->data = val;
    newNode->next = NULL;
    
    newNode->next = top;
    top = newNode;
}

int pop() {
    if(top == NULL) {
        printf("Stack is already empty");
        exit(1);
    }
    node* tmp = top;
    int val = tmp->data;
    
    top = top->next;
    free(tmp);
    
    return val;
}

int peek() {
    if(isEmpty()) {
        printf("Stack overflow");
        return -1;
    }
    return top->data;
}



void print_stack() {
    node* tmp = top;
    while(tmp != NULL) {
        printf("%d ", tmp->data);
        tmp = tmp->next;
    }
    printf("\n");
}

int main() {
    int choice, data;
    
    while(1) {
        printf("\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Top\n");
        printf("4. Is Empty\n");
        printf("5. Print\n");
        printf("6. Quit\n");
        printf("Please enter your choice: ");
        scanf("%d", &choice);
        
        switch(choice) {
            case 1:
                printf("Enter the element to insert: ");
                scanf("%d", &data);
                push(data);
                break;
            case 2:
                data = pop();
                printf("Deleted data is: %d", data);
                break;
            case 3: 
                data = peek();
                printf("Top value is: %d", data);
                break;
            case 4:
                if(isEmpty()) {
                    printf("Empty\n");
                }
                else {
                    printf("Not Empty\n");
                }
                break;
            case 5:
                print_stack();
                break;
            case 6:
                exit(1);
            default:
                printf("Wrong choice\n");
        }
    }
    
    return 0;
}