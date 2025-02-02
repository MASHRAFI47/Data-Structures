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

void insert_at_end(Node* head, int value) {
    Node* newNode = new Node(value);

    if(head == NULL) {
        head = newNode;
        return;
    }

    Node* tmp = head;
    while(tmp->next != NULL) {
        tmp = tmp->next;
    }

    tmp->next = newNode;
}

int main() {
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);

    head->next = a;
    a->next = b;

    insert_at_end(head, 100);
    print_linked_list(head);

    return 0;
}