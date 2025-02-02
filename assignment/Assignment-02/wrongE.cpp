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

int freq[1005] = {0};

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
    cout << endl;
}

void add_to_freq(Node* head) {
    Node* tmp = head;
    while(tmp != NULL) {
        freq[tmp->value]++;
        tmp = tmp->next;
    }
}

void selection_sort(Node* head) {
    Node* tmp = head;
    for(Node* i = head; i->next != NULL; i=i->next) {
        for(Node* j = i->next; j != NULL; j=j->next) {
            if(i->value > j->value) {
                swap(i->value, j->value);
            }
        }
    }
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


vector<int>vec;
vector<int>vec2;

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
        vec.push_back(val);
        // delete_at_indx(head, val);
    }

    add_to_freq(head);
    selection_sort(head);
    print_singly(head);

    // cout << endl;
    for(int i = 0; i < 1005; i++) {
        if(freq[i] >= 1) {
            vec2.push_back(i);
        }
        if(freq[i] > 1) {
            while(freq[i] != 1) {
                delete_at_tail(head, tail, i, freq[i]);
                freq[i]--;
            }
        }
    }

    print_singly(head);

    for(int i = 0; i < vec.size(); i++) {
        cout << vec[i] << " ";
    }

    cout << endl;

    for(int i = 0; i < vec2.size(); i++) {
        cout << vec2[i] << " ";
    }

    cout << endl;

    vector<int>vec3;
    for(int i = 0; i < vec.size(); i++) {
        for(int j = 0; j < vec2.size(); j++) {
            if(vec[i] == vec2[j]) {
                cout << vec[j] << " ";
                
            }
        }
    }


    return 0;
}