#include<iostream>
using namespace std;
struct BinaryNode
{
    int data;
    struct BinaryNode* left;
    struct BinaryNode* right;
};
struct BinaryNode* createAnewNode(int data)
{
    BinaryNode* newNode = new BinaryNode();
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}
struct BinaryNode* InsertNode(struct BinaryNode* root, int data)
{
    if(root == NULL)
    {
        root = createAnewNode(data);
    }
    else if(data <= root->data)
    {
        root->left = InsertNode(root->left, data);
    }
    else
    {
        root->right = InsertNode(root->right, data);
    }
    return root;
}
struct BinaryNode* FindMinData(struct BinaryNode* root)
{
	while(root->left != NULL)
    {
        root = root->left;
    }
	return root;
}
struct BinaryNode* nodeDeletion(struct BinaryNode *root, int data) {
	if(root == NULL)
    {
        return root;
    }
	else if(data < root->data)
    {
        root->left = nodeDeletion(root->left,data);
    }
	else if (data > root->data)
    {
        root->right = nodeDeletion(root->right,data);
    }
	else {
		if(root->left == NULL && root->right == NULL) {
			delete root;
			root = NULL;
		}
		else if(root->left == NULL) {
			struct BinaryNode *temp = root;
			root = root->right;
			delete temp;
		}
		else if(root->right == NULL) {
			struct BinaryNode *temp = root;
			root = root->left;
			delete temp;
		}
		else {
			struct BinaryNode *temp = FindMinData(root->right);
			root->data = temp->data;
			root->right = nodeDeletion(root->right,temp->data);
		}
	}
	return root;
}
struct BinaryNode* NodeInsertion(struct BinaryNode* root, int data)
{
    if(root == NULL)
    {
        root = createAnewNode(data);
    }
    else if(data <= root->data)
    {
        root->left = NodeInsertion(root->left, data);
    }
    else
    {
        root->right = NodeInsertion(root->right, data);
    }
    return root;
}
bool SearchData(BinaryNode* root, int data)
{
    if(root == NULL)return false;
    else if(data == root->data)
    {
        return true;
    }
    else if(data <= root->data)
    {
        return SearchData(root->left, data);
    }
    else
    {
        return SearchData(root->right, data);
    }
}
int main()
{
    BinaryNode *root = NULL;
    root = NodeInsertion(root ,40);
    root = NodeInsertion(root ,25);
    root = NodeInsertion(root ,35);
    root = NodeInsertion(root ,37);

    int data;
    cout  << "Enter a data " << endl;
    cin >> data;

    if(SearchData(root,data))
    {
        cout << "Found  the data" << endl;
    }
    else
    {
        cout << "The data is Not data" << endl;
    }
   root =  nodeDeletion(root,25);
}



