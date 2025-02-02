//https://www.naukri.com/code360/problems/code-find-a-node_5682?leftPanelTabValue=SUBMISSION


/************************************************************

    Following is the Binary Tree node structure

    template <typename T>
    class BinaryTreeNode
    {
        public :
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data)
        {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/

bool isNodePresent(BinaryTreeNode<int> *root, int x) {
    queue<BinaryTreeNode<int> *> q;
    q.push(root);

    while(!q.empty()) {
        BinaryTreeNode<int>* p = q.front();
        q.pop();

        if(p->data == x) {
            return true;
        }

        if(p->left) q.push(p->left);
        if(p->right) q.push(p->right);
    }

    return false;
}





///recursion
bool isNodePresent(BinaryTreeNode<int> *root, int x) {
    if(root == NULL) {
        return false;
    }

    if(root->data == x) {
        return true;
    }

    bool l = isNodePresent(root->left, x);
    bool r = isNodePresent(root->right, x);

    return l || r;
}