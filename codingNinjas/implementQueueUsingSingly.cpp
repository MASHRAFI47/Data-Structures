//https://www.naukri.com/code360/problems/queue-using-array-or-singly-linked-list_2099908?leftPanelTabValue=PROBLEM

#include <bits/stdc++.h> 
class Queue {
public:
    class Node {
        public:
        int val;
        Node* next;
        Node* tail;

        Node(int val) {
            this->val = val;
            this->next = NULL;
        }
    };

    Node* head = NULL;
    Node* tail = NULL;

    Queue() {
        // Implement the Constructor
    }

    /*----------------- Public Functions of Queue -----------------*/

    bool isEmpty() {
        return head == NULL;
    }

    void enqueue(int data) {
        Node* newNode = new Node(data);
        if(head == NULL) {
            head = newNode;
            tail = newNode;
            return;
        }

        tail->next = newNode;
        tail = newNode;
    }

    int dequeue() {
        if(head == NULL) {
            return -1;
        }
        else {
            int val = head->val;
            Node* deleteNode = head;
            head = head->next;
            delete deleteNode;
            return val;
        }
        // Implement the dequeue() function
    }

    int front() {
        if(head == NULL) {
            return -1;
        }
        return head->val;
    }
};