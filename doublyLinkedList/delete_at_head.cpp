#include <bits/stdc++.h>
using namespace std;

class Node {
    public:
    int value;
    Node* next;
    Node* prev;

    Node(int value) {
        this->value = value;
        this->next = NULL;
        this->prev = NULL;
    }
};


void delete_at_head(Node* &head, Node* &tail) {
    Node* deleteNode = head;
    head = head->next;
    delete deleteNode;
    
    if(head == NULL) {
        tail = NULL;
        return;
    }

    head->prev = NULL;
}

void print_forward(Node* head) {
    Node* tmp = head;
    while(tmp != NULL) {
        cout << tmp->value << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

void print_backward(Node* tail) {
    Node* tmp = tail;
    while(tmp != NULL) {
        cout << tmp->value << " ";
        tmp = tmp->prev;
    }
    cout << endl;
}

int main() {
    Node* head = new Node(10); 
    Node* a = new Node(20); 
    Node* tail = new Node(30); 

    head->next = a;
    a->prev = head;

    a->next = tail;
    tail->prev = a;

    delete_at_head(head, tail);
    print_forward(head);
    print_backward(tail);

    return 0;
}