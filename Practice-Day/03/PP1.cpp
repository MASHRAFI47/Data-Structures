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

void insert_at_tail(Node* &head, Node* &tail, int val) {
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

void print_singly(Node* head) {
    Node* tmp = head;
    while(tmp != NULL) {
        cout << tmp->value << endl;
        tmp = tmp->next;
    }
    cout << endl;
}

int cnt_size(Node* head) {
    Node* tmp = head;
    int cnt = 0;
    while(tmp != NULL) {
        cnt++;
        tmp = tmp->next;
    }

    return cnt;
}

bool check_same(Node* head, Node* head2) {
    Node* tmp = head;
    Node* tmp2 = head2;

    bool same = true;

    int first = cnt_size(tmp);
    int second = cnt_size(tmp2);

    if(first != second) {
        return false;
    }

    while(tmp != NULL) {
        if(tmp->value != tmp2->value) {
            return false;
        }

        tmp = tmp->next;
        tmp2 = tmp2->next;
    }

    return same;
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

    
    Node* head2 = NULL;
    Node* tail2 = NULL;

    while(true) {
        int val;
        cin >> val;

        if(val == -1) {
            break;
        }

        insert_at_tail(head2, tail2, val);
    }

    bool same = check_same(head, head2);
    if(same) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }


    return 0;
}