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

int freq[201] = {0};

void insert_at_tail(Node* &head, Node* &tail, int value) {
    Node* newNode = new Node(value);

    if(head == NULL) {
        head = newNode;
        tail = newNode;
    }

    tail->next = newNode;
    tail = newNode;
}

void freqCount(Node* head) {
    Node* tmp = head;

    while(tmp != NULL) {
        freq[tmp->value]++;
        tmp = tmp->next;
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

    freqCount(head);

    // for(int i = 0; i < 201; i++) {
    //     cout << i << " : " << freq[i] << endl;
    // }

    bool duplicate = false;
    for(int i = 0; i < 201; i++) {
        if(freq[i] > 1) {
            duplicate = true;
            break;
        }
    }

    if(duplicate) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }

    return 0;
}