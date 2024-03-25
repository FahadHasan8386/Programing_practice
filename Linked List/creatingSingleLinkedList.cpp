#include <bits/stdc++.h>
using namespace std;

struct node {
    int data;
    struct node *link;

};
int main ()
{
    struct node *head = new node ();
    head -> data = 45;
    head -> link = NULL;

    struct node *current = new node();
    current -> data = 3;
    current -> link = NULL;
    head -> link = current ;

    current = new node ();
    current -> data = 5;
    current -> link = NULL;

    head -> link ->link = current;

    cout << current->data;
}
