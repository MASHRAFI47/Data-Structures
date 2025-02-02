#include <bits/stdc++.h>
using namespace std;

class Node {
    public:
    int value;
    Node* left;
    Node* right;

    Node(int value) {
        this->value = value;
        this->left = NULL;
        this->right = NULL;
    }
};

Node* input_tree() {
    int val;
    cin >> val;
    Node* root;
    if(val == -1) {
        root = NULL;
    }
    else {
        root = new Node(val);
    }

    queue<Node *> q;
    if(root) {
        q.push(root);
    }

    while(!q.empty()) {
        Node* p = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;
        Node* myLeft, *myRight;

        if(l == -1) {
            myLeft = NULL;
        }
        else {
            myLeft = new Node(l);
        }

        if(r == -1) {
            myRight = NULL;
        }
        else {
            myRight = new Node(r);
        }

        p->left = myLeft;
        p->right = myRight;

        if(p->left) q.push(p->left);
        if(p->right) q.push(p->right);
    }
    return root;
}

void insert(Node* &root, int val) {
    if(root == NULL) {
        root = new Node(val);
    }

    if(root->value > val) {
        if(root->left == NULL) {
            root->left = new Node(val);
        }
        else {
            insert(root->left, val);
        }
    }
    else {
        if(root->right == NULL) {
            root->right = new Node(val);
        }
        else {
            insert(root->right, val);
        }
    }
}

void level_order(Node* root) {
    queue<Node* > q;
    if(root) q.push(root);

    while(!q.empty()) {
        Node* p = q.front();
        q.pop();

        cout << p->value << " ";

        if(p->left) q.push(p->left);
        if(p->right) q.push(p->right);
    }
}


int main() {
    Node* root = input_tree();
    
    insert(root, 11);
    level_order(root);

    return 0;
}