#include<iostream>
using namespace std;

struct BinaryNode {
	int data;
	struct BinaryNode *left;
	struct BinaryNode *right;
};

void Preorder_traverse(struct BinaryNode *root) {
	if(root == NULL) return;


	cout << " " << root->data;
	Preorder_traverse(root->left);
	Preorder_traverse(root->right);
}

void Inorder_traverse(BinaryNode *root) {
	if(root == NULL) return;

	Inorder_traverse(root->left);
	cout << " " << root->data;
	Inorder_traverse(root->right);
}
void Postorder_traverse(BinaryNode *root) {
	if(root == NULL) return;

	Postorder_traverse(root->left);
	Postorder_traverse(root->right);

	cout << " " << root->data;
}
BinaryNode* NodeInsertion(BinaryNode *root,char data) {
	if(root == NULL) {
		root = new BinaryNode();
		root->data = data;
		root->left = root->right = NULL;
	}
	else if(data <= root->data)
		root->left = NodeInsertion(root->left,data);
	else
		root->right = NodeInsertion(root->right,data);
	return root;
}

int main() {

	BinaryNode* root = NULL;
	root = NodeInsertion(root,20); root = NodeInsertion(root,18);
	root = NodeInsertion(root,22); root = NodeInsertion(root,16);
	root = NodeInsertion(root,19); root = NodeInsertion(root,23);
	root = NodeInsertion(root,21);
	cout<<"Preorder Travesre: ";
	Preorder_traverse(root);
	cout<<endl;

	cout<<"Inorder Travese: ";
	Inorder_traverse(root);
	cout<<endl;

	cout<<"Postorder Traverse: ";
	Postorder_traverse(root);
	cout<<endl;
}
