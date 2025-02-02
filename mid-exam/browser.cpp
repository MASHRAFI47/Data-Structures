#include <bits/stdc++.h>
using namespace std;

class Node {
    public:
    string value;
    Node* next;
    Node* prev;

    Node(string value) {
        this->value = value;
        this->next = NULL;
        this->prev = NULL;
    }
};

int sz = 0;

void insert_at_tail(Node* &head, Node* &tail, string val) {
    sz++;
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

void print_strings(Node* head) {
    Node* tmp = head;
    while(tmp != NULL) {
        cout << tmp->value << " ";
        tmp = tmp->next;
    }
}


void visit_address(Node* head, Node* address, Node* &current) {
    Node* tmp = head;
    
    bool notHere = true;
    for(int i = 0; i < sz; i++) {
        if(tmp->value == address->value) {
            current = tmp;
            notHere = false;
            cout << current->value << endl;
            break;
        }
        else {
            tmp = tmp->next;
        }
    }

    if(notHere) {
        cout << "Not Available" << endl;
    }

    // for(Node* i = tmp; i != NULL; i = i->next) {
    //     if(i->value == tmp->value) {
    //         current = tmp;
    //     }
    //     else {
    //         current = current->next;
    //     }
    // }
}

int main() {
    Node* head = NULL;
    Node* tail = NULL;

    Node* current = NULL;



    while(true) {
        string val;
        cin >> val;

        if(val == "end") {
            break;
        }

        insert_at_tail(head, tail, val);
    }

    current = head;

    int q;
    cin >> q;
    cin.ignore();
    while(q--) {
        string s;
        getline(cin, s);

        if(s.find("visit") == 0) {
            s.erase(0, 6);
            // cout << s << endl;

            Node* address = new Node(s);
            visit_address(head, address, current);
        }
        else if(s == "prev") {
            if(current->prev != NULL) {
                current = current->prev;
                cout << current->value << endl;
            } 
            else {
                cout << "Not Available" << endl;
            }
        }

        else if(s == "next") {
            if(current->next != NULL) {
                current = current->next;
                cout << current->value << endl;
            } 
            else {
                cout << "Not Available" << endl;
            }
        }

        // stringstream ss(s);
        // string word;

        // while(ss >> word) {
        //     if(word == "visit") {
        //         ss >> word;

        //         Node* newNode = new Node(word);
        //         visit_address(head, newNode);
        //         cout << current->value << endl;
                
        //     }
            
        //     else if(word == "prev") {
        //         if(current->prev != NULL) {
        //             current = current->prev;
        //             cout << current->value << endl;
        //         } 
        //         else {
        //             cout << "Not Available" << endl;
        //         }
        //     }

        //     else if(word == "next") {
        //         if(current->next != NULL) {
        //             current = current->next;
        //             cout << current->value << endl;
        //         } 
        //         else {
        //             cout << "Not Available" << endl;
        //         }
        //     }
        // }
    }
   

    return 0;
}