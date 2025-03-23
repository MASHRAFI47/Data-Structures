#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define MAX 4

int stack_arr[MAX];
int top = -1;

void push(int val) {
    if(top == MAX-1) {
        printf("Stack overflow\n");
        return;
    }
    
    top++;
    stack_arr[top] = val;
}

int pop() {
    if(top == -1) {
        printf("Stack Overflow\n");
        exit(1);
    }
    
    int value;
    value = stack_arr[top];
    top--;
    return value;
}

bool isEmpty() {
    return top == -1;
}

int peek() {
    if(top == -1) {
        return -1;
    }
    return stack_arr[top];
}

void print() {
    if(top == -1) {
        printf("Stack Overflow\n");
        return;
    }
    for(int i = top; i >= 0; i--) {
        printf("%d ", stack_arr[i]);
    }
}

int main() {
    int data;
    push(1);
    push(2);
    push(3);
    push(4);
    data = pop();
    print();
    
    return 0;
}