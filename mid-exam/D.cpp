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

int sz = 0;

void print_forward(Node* head) {
    Node* tmp = head;

    while(tmp != NULL) {
        cout << tmp->value << " ";
        tmp = tmp->next;
    }
}

void print_backward(Node* tail) {
    Node* tmp = tail;
    while(tmp != NULL) {
        cout << tmp->value << " ";
        tmp = tmp->prev;
    }
}

void insert_at_head(Node* &head, Node* &tail, int val) {
    sz++;
    Node* newNode = new Node(val);

    if(head == NULL) {
        head = newNode;
        tail = newNode;
        return;
    }

    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}

void insert_at_tail(Node* head, Node* &tail, int val) {
    sz++;
    Node* newNode = new Node(val);
    
    if(head == NULL) {
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}

void insert_at_any(Node* head, int idx, int val) {
    sz++;
    Node* newNode = new Node(val);
    Node* tmp = head;

    for(int i = 0; i < (idx-1); i++) {
        tmp = tmp->next;
    }

    newNode->next = tmp->next;
    tmp->next->prev = newNode;
    newNode->prev = tmp;
    tmp->next = newNode;
}



int main() {
    Node* head = NULL;
    Node* tail = NULL;

    int q;
    cin >> q;

    while(q--) {
        int index, value;
        cin >> index >> value;

        if(index > sz || index < 0) {
            cout << "Invalid" << endl;
        }
        else if(index == 0) {
            insert_at_head(head, tail, value);
            cout << "L -> ";
            print_forward(head);
            cout << endl;
            cout << "R -> ";
            print_backward(tail);
            cout << endl;
        }
        else if(index == sz){
            insert_at_tail(head, tail, value);
            cout << "L -> ";
            print_forward(head);
            cout << endl;
            cout << "R -> ";
            print_backward(tail);
            cout << endl;
        }
        else if(index > 0 && index < sz) {
            insert_at_any(head, index, value);
            cout << "L -> ";
            print_forward(head);
            cout << endl;
            cout << "R -> ";
            print_backward(tail);
            cout << endl;
        }
    }

    

    return 0;
}