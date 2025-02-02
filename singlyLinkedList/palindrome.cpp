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

void print_linked_list(Node* head) {
    Node* tmp = head;
    while(tmp != NULL) {
        cout << tmp->value << " ";
        tmp = tmp->next;
    }
    cout << endl;
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

bool isPalindrome(Node* head) {
    vector<int>vec;

    Node* tmp = head;
    while(tmp != NULL) {
        vec.push_back(tmp->value);
        tmp = tmp->next;
    }

    for(int i = 0, j = vec.size()-1; i<=j; i++, j--) {
        if(vec[i] != vec[j]) {
            return false;
        }
    }
    return true;
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

    if(isPalindrome(head)) {
        cout << "Palindrome" << endl;
    }
    else {
        cout << "Not a palindrome" << endl;
    }

    return 0;
}