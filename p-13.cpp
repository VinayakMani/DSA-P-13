//Vinayak mani , Roll no. 202132
// C++ program for different tree traversals
#include <iostream>
using namespace std;

struct Node {
	int data;
	struct Node *left, *right;
	Node(int data)
	{
		this->data = data;
		left = right = NULL;
	}
};

void printPostorder(struct Node* node)
{
	if (node == NULL)
		return;

	printPostorder(node->left);
	printPostorder(node->right);
	cout << node->data << " ";
}

/* Given a binary tree, print its nodes in inorder*/
void printInorder(struct Node* node)
{
	if (node == NULL)
		return;

	printInorder(node->left);
	cout << node->data << " ";
	printInorder(node->right);
}

/* Given a binary tree, print its nodes in preorder*/
void printPreorder(struct Node* node)
{
	if (node == NULL)
		return;

	cout << node->data << " ";
	printPreorder(node->left);
	printPreorder(node->right);
}

/* Driver program to test above functions*/
int main()
{
	struct Node* root = new Node(7);
	root->left = new Node(8);
	root->right = new Node(9);
	root->left->left = new Node(10);
	root->left->right = new Node(11);

	cout << "\nPreorder traversal of binary tree is \n";
	printPreorder(root);

	cout << "\nInorder traversal of binary tree is \n";
	printInorder(root);

	cout << "\nPostorder traversal of binary tree is \n";
	printPostorder(root);

	return 0;
}
