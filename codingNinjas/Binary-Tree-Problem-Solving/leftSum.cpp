// https://www.naukri.com/code360/problems/left-sum_920380

#include <bits/stdc++.h> 
/*
	Tree Node class.

	class BinaryTreeNode 
	{
		T data;
		BinaryTreeNode<T> *left;
		BinaryTreeNode<T> *right;

		BinaryTreeNode(T data) {
			this->data = data;
			left = NULL;
			right = NULL;
		}
	}
*/
int total(BinaryTreeNode<int>* root) {
	if(root == NULL) {
		return 0;
	}
	int sum = 0;

	queue<BinaryTreeNode<int> *> q;
	q.push(root);

	while(!q.empty()) {
		BinaryTreeNode<int>* p = q.front();
		q.pop();

		if(p->left) {
			sum+= p->left->data;
			q.push(p->left);
		}

		if(p->right) q.push(p->right);
	}

	return sum;
}

long long leftSum(BinaryTreeNode<int> *root)
{
	int sum = total(root);
	return sum;
}