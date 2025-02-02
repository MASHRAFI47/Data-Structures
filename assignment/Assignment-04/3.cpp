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


int count_nodes(Node* root) {
    if(root == NULL) {
        return 0;
    }

    int l = count_nodes(root->left);
    int r = count_nodes(root->right);

    return l+r+1;
}

int max_height(Node* root) {
    if(root == NULL) {
        return 0;
    }
    if(root->left == NULL && root->right == NULL) {
        return 0;
    }

    int l = max_height(root->left);
    int r = max_height(root->right);

    return max(l,r)+1;
}

bool level_order(Node* root) {
    queue<pair<Node*, int>> q;
    if(root) q.push({root, 0});

    while(!q.empty()) {
        bool left = false;
        bool right = false;
        pair<Node*, int> p = q.front();
        q.pop();

        Node* node = p.first;
        int level = p.second;

        if(node->left) {
            q.push({node->left, level+1});
        }
        else if(node->left == NULL) {
            return false;
        }
        

        if(node->right) {
            q.push({node->right, level+1});
        }
        else if(root->right == NULL) {
            return false;
        }
    }
    return true;
}

int main() {
    Node* root = input_tree();

    cout << level_order(root) << endl;
    
    return 0;
}