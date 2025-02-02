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

void print_singly(Node* head) {
    Node* tmp = head;
    while(tmp != NULL) {
        cout << tmp->value << " ";
        tmp = tmp->next;
    }
    cout << endl;
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

void delete_at_tail(Node* head, Node* &tail, int idx, int idxValue) {
    Node* tmp = head;

    for(int i = 0; i < idx - 1; i++){
        tmp = tmp->next;
    }
    Node* deleteNode = tmp->next;
    tmp->next = tmp->next->next;
    delete deleteNode;
    tail = tmp;

}

void delete_at_head(Node* &head) {
    Node* tmp = head;
    
    Node* deleteNode = tmp;
    head = tmp->next;
    delete deleteNode;
}

int funcCall = 0;

void delete_at_any(Node* head, Node* tail, int idx, int cntIdx) {
    idx = idx + cntIdx;
    cout << idx << endl;

    if(idx == 1) {
        delete_at_head(head);
        return;
    }
    else if(idx == singly_size(head)) {
        delete_at_tail(head, tail, idx, idx);
        return;
    }

    Node* tmp = head;
    for(int i = 0; i < idx-1; i++) {
        tmp = tmp->next;
    }
    
    Node* deleteNode = tmp->next;
    tmp->next = tmp->next->next;
    delete deleteNode; 

    print_singly(head);
}


void check_duplicate(Node* head, Node* tail){
    Node* tmp = head;
    
    int countI = 1;
    for(Node* i = tmp; i != NULL; i=i->next) {

        int countJ = 0;
        for(Node* j = i->next; j != NULL; j=j->next) {

            // cout << i->value << " " << j->value << endl;
            if(i->value == j->value) {
                cout << countJ << " " << i->value << " " << j->value << endl;
                delete_at_any(head, tail, countJ, countI);
            }
            countJ++;

        }
        countI++;

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

    check_duplicate(head, tail);
    
    print_singly(head);

    return 0;
}