#include <bits/stdc++.h>
using namespace std;

struct node {
    int data;
    struct node *link;
};
void count_of_nodes(struct node *head){
    int count = 0 ;
    if(head == NULL){
        cout << "Linked list is empty" << endl;
    }
    else{
    struct node *ptr = NULL;
    ptr = head ;
    while (ptr != NULL){
    count++;
    ptr = ptr ->link;
    }
    cout << "Number of nodes : " << count;
    }
}
int main ()
{
    struct node *head = new node ();
    head->data = 45;
    head->link = NULL;

    struct node *current = new node();
    current->data = 3;
    current->link = NULL;
    head->link = current ;

    current = new node ();
    current->data = 5;
    current->link = NULL;

    head->link->link = current;

    count_of_nodes(head);

    return 0;
}
