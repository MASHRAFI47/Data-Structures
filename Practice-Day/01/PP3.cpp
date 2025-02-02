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

int totalElements(Node* head) {
    int cnt = 0;

    Node* tmp = head;
    while(tmp != NULL) {
        cnt++;
        tmp = tmp->next;
    }

    return cnt;
}

void middleValue(Node* head, int value) {
    Node* tmp = head;
    int mid = value/2;

    if(value%2 == 0) {
        for(int i = 0; i < value; i++) {
            if(i == mid || i == (mid-1)) {
                cout << tmp->value << " ";
                if(i == mid) {
                    break;
                }
            }
            tmp = tmp->next;
        }
    }
    else {
        for(int i = 0; i < value; i++) {
            if(i == mid) {
                cout << tmp->value << endl;
                break;
            }
            tmp = tmp->next;
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

    int cnt = totalElements(head);
    // cout << cnt << endl;
    middleValue(head, cnt);

    return 0;
}