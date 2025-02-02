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

void insert_at_tail(Node* &head, Node* &tail, int val) {
    Node* newNode = new Node(val);

    if(head == NULL) {
        head = newNode;
        tail = newNode;
    }

    tail->next = newNode;
    tail = newNode;
}

void print_linked_list(Node* head) {
    Node* tmp = head;

    while(tmp != NULL) {
        cout << tmp->value << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

void insert_at_head(Node* &head, int val) {
    Node* newNode = new Node(val);

    Node* tmp = head;
    newNode->next = tmp;
    head = newNode;
}

void insert_at_any(Node* head, Node* tail, int idx, int val) {
    Node* newNode = new Node(val);

    Node* tmp = head;
    for(int i = 0; i < idx-1; i++) {
        tmp = tmp->next;
    }

    newNode->next = tmp->next;
    tmp->next = newNode;
}

int linked_list_size(Node* head) {
    Node* tmp = head;

    int sz = 0;
    while(tmp != NULL) {
        sz++;
        tmp = tmp->next;
    }

    return sz;
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