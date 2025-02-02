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

int singly_size(Node* head) {
    Node* tmp = head;

    int cnt = 0;
    while(tmp != NULL) {
        cnt++;
        tmp = tmp->next;
    }

    return cnt;
}

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

void insert_at_head(Node* &head, Node* &tail, int val) {
    Node* newNode = new Node(val);

    if(head == NULL) {
        head = newNode;
        tail = newNode;
        return;
    }

    newNode->next = head;
    head = newNode;
}

void delete_at_head(Node* &head) {
    Node* tmp = head;
    
    Node* deleteNode = tmp;
    head = tmp->next;
    delete deleteNode;
}

void delete_at_tail(Node* &head, Node* &tail, int index) {
    Node* tmp = head;

    for(int i = 0; i < index-1; i++) {
        tmp = tmp->next;
    }

    Node* deleteNode = tmp->next;
    tmp->next = tmp->next->next;
    tail = tmp;
    delete deleteNode;
}

// void delete_at_any(Node* &head, Node* &tail, int index) {
//     int size = singly_size(head);

//     if(index == 0) {
//         delete_at_head(head);
//         return;
//     }
//     else if(index == size) {
//         delete_at_tail(head, tail, index);
//         return;
//     }
//     // else if(index == (size - 1)) {
//     //     delete_at_tail(head, tail, index);
//     //     return;
//     // }
//     if(index > size) {
//         delete_at_tail(head, tail, index);
//         return;
//     }

//     Node* tmp = head;

//     for(int i = 0; i < index-1; i++) {
//         tmp = tmp->next;
//     }

//     Node* deleteNode = tmp->next;
//     tmp->next = tmp->next->next;
//     delete deleteNode;
// }

void delete_at_any(Node* head, int index) {
    Node* tmp = head;

    for(int i = 0; i < index-1; i++) {
        tmp = tmp->next;
    }

    Node* deleteNode = tmp->next;
    tmp->next = tmp->next->next;
    delete deleteNode;
}

void print_singly(Node* head) {
    Node* tmp = head;

    while(tmp != NULL) {
        cout << tmp->value << " ";
        tmp = tmp->next;
    }
    cout << endl;
}


int main() {

    int t;
    cin >> t;

    Node* head = NULL;
    Node* tail = NULL;
    while(t--) {
        int query, indexValue;
        cin >> query >> indexValue;

        int size = singly_size(head);

        if(query == 0) {
            insert_at_head(head, tail, indexValue);
        }
        else if(query == 1) {
            insert_at_tail(head, tail, indexValue);
        }
        else if(query == 2 && indexValue == 0) {
            delete_at_head(head);
        }
        else if(query == 2 && indexValue >= size) {
            // cout << "INVALID" << endl;
            print_singly(head);
            continue;
        }
        else if(query == 2 && indexValue == (size-1)) {
            delete_at_tail(head, tail, indexValue);
        }
        else if(query == 2){
            delete_at_any(head, indexValue);
        }

        print_singly(head);
    }

    // cout << "head tail " << head->value << " " << tail->value << endl;
    

    return 0;
}