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
        cout << tmp->value << endl;
        tmp = tmp->next;
    }
}

void delete_at_tail(Node* head, Node* &tail, int idx) {
    Node* tmp = head;
    for(int i = 0; i < idx-1; i++) {
        tmp = tmp->next;
    }
    
    Node* deleteNode = tmp->next;
    tmp->next = tmp->next->next;
    delete deleteNode;
    tail = tmp;
}

void sort_linked_list(Node* head) {
    for(Node* i = head; i->next != NULL; i = i->next) {
        for(Node* j = i->next; j != NULL; j = j->next) {
            if(i->value > j->value) {
                swap(i->value, j->value);
            }
        }
    }
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

    int delIdx;
    cin >> delIdx;


    sort_linked_list(head);
    print_linked_list(head);


    return 0;
}