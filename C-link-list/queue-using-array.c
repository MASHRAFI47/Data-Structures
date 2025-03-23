#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define MAX 4

int front = -1;
int rear = -1;
int queue_arr[MAX];

void enqueue(int val) {
    if(rear == MAX-1) {
        printf("Queue overflow\n");
        exit(1);
    }
    else if(front == -1 && rear == -1) {
        front = rear = 0;
        queue_arr[rear] = val;
    }
    else {
        rear++;
        queue_arr[rear] = val;
    }
}

int dequeue() {
    if(front == -1 && rear == -1) {
        printf("Queue underflow\n");
        return -1;
    }
    else if(front == rear) {
        int value;
        value = queue_arr[rear];
        front = rear = -1;
        return value;
    }
    else {
        int value;
        value = queue_arr[front];
        front++;
        return value;
    }
}

int peek() {
    if(front == -1) {
        return -1;
    }
    return queue_arr[front];
}

bool isEmpty() {
    return front == -1;
}

void print() {
    if(front == -1) {
        printf("Queue is empty\n");
        return;
    }
    for(int i = front; i <= rear; i++) {
        printf("%d ", queue_arr[i]);
    }
}


int main() {
    int data;
    enqueue(10);
    enqueue(20);
    data = dequeue();
    data = dequeue();
    printf("%d", data);
    print();
    return 0;
}