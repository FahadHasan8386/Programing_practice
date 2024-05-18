#include <bits/stdc++.h>
using namespace std;

struct bstnode {
    int data;
    bstnode* left;
    bstnode* right;
};

bstnode* createNode(int key) {
    bstnode* newNode = new bstnode();
    newNode->data = key;
    newNode->left = newNode->right = NULL;
    return newNode;
}

bstnode* insert(bstnode* root, int key) {
    if (root == NULL) {
        return createNode(key);
    }
    if (key < root->data) {
        root->left = insert(root->left, key);
    } else {
        root->right = insert(root->right, key);
    }
    return root;
}

void inorder(bstnode* root) {
    if (root != NULL) {
        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);
    }
}

int main() {
    bstnode* root = NULL; // pointer to root node

    root = insert(root, 80);
    insert(root, 20);
    insert(root, 40);
    insert(root, 70);
    insert(root, 60);
    insert(root, 80);

    cout << "Inorder traversal of the BST: ";
    inorder(root);
    cout << endl;

    return 0;
}
