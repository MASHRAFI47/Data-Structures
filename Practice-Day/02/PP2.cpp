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

void reverse_print(Node* tmp) {
    if(tmp == NULL) {
        return;
    }
    reverse_print(tmp->next);
    cout << tmp->value << " ";
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

    // print_linked_list(head);
    reverse_print(head);

    return 0;
}