#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct Node {
    int data;
    struct Node* next;
} node;

node* front = NULL;
node* rear = NULL;

void enqueue(int val) {
    node* newNode = (node *)malloc(sizeof(node));
    if(newNode == NULL) {
        printf("memory allocation failed\n");
        return;
    }
    newNode->data = val;
    newNode->next = NULL;
    
    if(front == NULL && rear == NULL) {
        front = newNode;
        rear = newNode;
        return;
    }
    else {
        rear->next = newNode;
        rear = newNode;
    }
}

int dequeue() {
    if(front == NULL) {
        printf("Queue Underflow\n");
        return -1;
    }
    node* tmp = front;
    int val = tmp->data;
    front = front->next;
    if(front == NULL) {
        rear = NULL;
    }
    free(tmp);
    
    return val;
}

int peek() {
    if(front == NULL) {
        return -1;
    }
    return front->data;
}

bool isEmpty() {
    return front == NULL;
}

void print() {
    if(front == NULL) {
        printf("Queue is empty\n");
        return;
    }
    
    node* tmp;
    while(tmp != NULL) {
        printf("%d", tmp->data);
    }
    printf("\n");
}

int main() {
    enqueue(10);
    
    return 0;
}