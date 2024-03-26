#include <bits/stdc++.h>
using namespace std;

struct node {
    int data;
    struct node *link;
};

void add_at_end(struct node *&head, int data) { // Pass head by reference
    struct node *ptr, *temp;
    ptr = head;
    temp = new node();

    temp->data = data;
    temp->link = NULL;

    if (head == NULL) {
        head = temp;
        return;
    }

    while (ptr->link != NULL) {
        ptr = ptr->link;
    }
    ptr->link = temp;
}

int main() {
    struct node *head = NULL; // Initialize head to NULL

    // Create the initial linked list with three nodes
    add_at_end(head, 10);
    add_at_end(head, 20);
    add_at_end(head, 30);

    // Insert a fourth node at the end
    add_at_end(head, 40);

    // Print the linked list to verify
    struct node *ptr = head;
    while (ptr != NULL) {
        cout << ptr->data << " ";
        ptr = ptr->link;
    }
    return 0;
}
