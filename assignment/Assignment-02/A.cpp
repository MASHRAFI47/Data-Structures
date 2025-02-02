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
}

int getMax(Node* head) {
    Node* tmp = head;

    int mx = INT_MIN;
    while(tmp != NULL) {
        mx = max(tmp->value, mx);
        tmp = tmp->next;
    }

    return mx;
}

int getMin(Node* head) {
    Node* tmp = head;

    int mn = INT_MAX;
    while(tmp != NULL) {
        mn = min(tmp->value, mn);
        tmp = tmp->next;
    }

    return mn;
}




int main() {
    Node* head = NULL;
    Node* tail = NULL;

    while(true) {
        int value;
        cin >> value;

        if(value == -1) {
            break;
        }

        insert_at_tail(head, tail, value);
    }
    // print_singly(head);

    int maxValue = getMax(head);
    int minValue = getMin(head);
    
    int difference = maxValue - minValue;


    cout << difference << endl;


    return 0;
}