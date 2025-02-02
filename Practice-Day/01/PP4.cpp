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

int countElements(Node* head) {
    int cnt = 0;

    Node* tmp = head;
    while(tmp != NULL) {
        cnt++;
        tmp = tmp->next;
    }

    return cnt;
}

void print_linked_list(Node* head) {
    Node* tmp = head;
    while(tmp != NULL) {
        cout << tmp->value << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

void insert_at_head(Node* &head, int value) {
    Node* newNode = new Node(value);

    newNode->next = head;
    head = newNode;
}

void insert_at_tail(Node* &head, Node* &tail, int value) {
    Node* newNode = new Node(value);

    Node* tmp = head;
    if(head == NULL) {
        head = newNode;
        tail = newNode;
    }

    tail->next = newNode;
    tail = newNode;
}

void insert_at_any(Node* &head, int index, int indexValue) {
    Node* newNode = new Node(indexValue);

    Node* tmp = head;
    for(int i = 0; i < index-1; i++) {
        tmp = tmp->next;
    }
    newNode->next = tmp->next;
    tmp->next = newNode;
}


int main() {
    Node* head = NULL;
    Node* tail = NULL;

    int val;
    while(true) {
        cin >> val;

        if(val == -1) {
            break;
        }

        insert_at_tail(head, tail, val);
    }

    int index;
    while(cin >> index >> val) {
        //count
        int total = countElements(head);

        if(index == 0) {
            insert_at_head(head, val);
            print_linked_list(head);
        }
        else if(index > total) {
            cout << "INVALID" << endl;
            continue;
        }
        else if(index == total) {
            insert_at_tail(head, tail, val);
            print_linked_list(head);
        }
        else {
            insert_at_any(head, index, val);
            print_linked_list(head);
        }        
    }
    // print_linked_list(head);

    return 0;
}