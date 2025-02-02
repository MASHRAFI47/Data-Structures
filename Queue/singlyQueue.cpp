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

class myQueue {
    public:
    Node* head = NULL;
    Node* tail = NULL;
    int sz = 0;

    void push(int val) {
        sz++;
        Node* newNode = new Node(val);
        if (tail == NULL) {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        tail = newNode;
    }

    void pop() {
        sz--;
        Node* deleteNode = head;
        head = head->next;
        delete deleteNode;
        if (head == NULL) {
            tail = NULL;
        }
    }

    int front() {
        return head->value;
    }

    int back() {
        return tail->value;
    }

    int size() {
        return sz;
    } 

    bool empty() {
        return head == NULL;
    }
};

int main() {
    myQueue q;
    
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int val;
        cin >> val;
        q.push(val);
    }

    while (!q.empty()) {
        cout << q.front() << endl;
        q.pop();
    }
    
    return 0;
}
