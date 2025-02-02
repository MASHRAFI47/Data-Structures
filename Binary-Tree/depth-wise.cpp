/*  
            1
           / \
          7    9
         /\     \
        2  6      9
           /\     /
          5  11   5    
*/



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

// 1 7 2 6 5 11 9 9 5 
void preOrder(Node* root) {
    if(root == NULL) {
        return;
    }
    cout << root->value << " ";
    preOrder(root->left);
    preOrder(root->right);
}

// inorder: 2 7 5 6 11 1 9 5 9
void inOrder(Node* root) {
    if(root == NULL) {
        return;
    }
    inOrder(root->left);
    cout << root->value << " ";
    inOrder(root->right);
}

void postOrder(Node* root) {
    if(root == NULL) {
        return;
    }
    postOrder(root->left);
    postOrder(root->right);
    cout << root->value << " ";
}

int main() {
    Node* root = new Node(1);
    Node* a = new Node(7);
    Node* b = new Node(2);
    Node* c = new Node(6);
    Node* d = new Node(5);
    Node* e = new Node(11);
    Node* f = new Node(9);
    Node* g = new Node(9);
    Node* h = new Node(5);


    root->left = a;
    a->left = b;
    a->right = c;
    c->left = d;
    c->right = e;
    root->right = f;
    f->right = g;
    g->left = h;
    

    inOrder(root);
    
    return 0;
}