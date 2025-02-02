#include <bits/stdc++.h>
using namespace std;

class Node {
    public:
    int value;
    Node* next;

    Node(int value) {
        this->value = value;
        this->next = NULL;
    }
};

void print_linked_list(Node* head) {
    Node* tmp = head;

    while(tmp != NULL) {
        cout << tmp->value << endl;
        tmp = tmp->next;
    }
}

void insert_at_tail(Node* &head, Node* &tail, int value) {
    Node* newNode = new Node(value);

    if(head == NULL) {
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    tail = newNode;
}

int main() {
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* tail = new Node(30);

    head->next = a;
    a->next = tail;

    insert_at_tail(head, tail, 100);
    insert_at_tail(head, tail, 42);
    print_linked_list(head);
    return 0;
}