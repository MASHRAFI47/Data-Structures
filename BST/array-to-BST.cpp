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

Node* convert_to_BST(int arr[], int n, int l, int r) {
    if(l > r) {
        return NULL;
    }
    int mid = (l + r) / 2;
    Node* root = new Node(arr[mid]);
    Node* leftRoot = convert_to_BST(arr, n, l, mid-1);
    Node* rightRoot = convert_to_BST(arr, n, mid+1, r);

    root->left = leftRoot;
    root->right = rightRoot;

    return root;
}


int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    Node* root = convert_to_BST(arr, n, 0, n-1);
    level_order(root);
    return 0;
}