#include <iostream>
using namespace std;

struct node {
    int data;
    struct node *link;
};

int main() {
    struct node *head = new struct node;
    head->data = 45;
    head->link = NULL;

    struct node *current = new struct node;
    current->data = 98;
    current->link = NULL;
    head->link = current;

    current = new struct node;
    current->data = 3;
    current->link = NULL;

    head->link->link = current;
    return 0;
}
