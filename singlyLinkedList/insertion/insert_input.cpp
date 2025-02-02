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
    Node* head = NULL;
    Node* tail = NULL;

    while(true) {
        int val;
        cin >> val;

        if(val == -1) {
            break;
        }

        insert_at_tail(head, tail, val);
    }

    print_linked_list(head);
    return 0;
}