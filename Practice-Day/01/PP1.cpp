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

void insert_at_tail(Node* &head, Node* &tail, int value) {
    Node* newNode = new Node(value);

    if(head == NULL) {
        head = newNode;
        tail = newNode;
    }

    tail->next = newNode;
    tail = newNode;
}

// count total elements
int count_linked_list(Node* head) {
    Node* tmp = head;
    int cnt = 0;

    while(tmp != NULL) {
        cnt++;
        tmp = tmp->next;
    }

    return cnt;
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

    int total = count_linked_list(head);
    cout << total << endl;
    return 0;
}