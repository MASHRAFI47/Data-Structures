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

int main() {
    Node *head = new Node(10);  
    Node *a = new Node(20);  
    Node *b = new Node(30);  
    Node *c = new Node(40);  
    
    head->next = a;
    a->next = b;
    b->next = c;
    c->next = head;

    Node* slow = head;
    Node* fast = head;

    bool cycleDetected = false;

    while(fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;

        if(slow == fast) {
            cycleDetected = true;
            break;
        }
    }

    if(cycleDetected) {
        cout << "Cycle Detected" << endl;
    }
    else {
        cout << "Not Detected" << endl;
    }

    return 0;
}