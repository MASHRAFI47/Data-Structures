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
        return;
    }

    tail->next = newNode;
    tail = newNode;
}

void print_singly(Node* head) {
    Node* tmp = head;
    while(tmp != NULL) {
        cout << tmp->value << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

void reverse_linked_list(Node* &head, Node* &tail, Node* tmp) {
    if(tmp->next == NULL) {
        head = tmp;
        return;
    }

    reverse_linked_list(head, tail, tmp->next);
    tmp->next->next = tmp;
    tmp->next = NULL;
    tail = tmp;
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

    reverse_linked_list(head, tail, head);
    print_singly(head);
    cout << head->value << " " << tail->value << endl;
    return 0;
}