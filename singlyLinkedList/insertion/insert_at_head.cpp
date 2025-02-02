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

void insert_at_head(Node* &head, int value) {
    Node* newNode = new Node(value);
    newNode->next = head;
    head = newNode;
}

void print_linked_list(Node* head) {
    Node* tmp = head;
    while(tmp != NULL) {
        cout << tmp->value << endl;
        tmp = tmp->next;
    }
}

int main() {
    Node* head = new Node(10);  
    Node* a = new Node(20);  
    Node* b = new Node(30);  

    head->next = a;
    a->next = b;

    insert_at_head(head, 100);
    print_linked_list(head);

    return 0;
}