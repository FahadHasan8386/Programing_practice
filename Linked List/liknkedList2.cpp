#include <bits/stdc++.h>
using namespace std;

struct node {
    int data ;
    struct node *link;
};
void count_of_nodes(struct node *head ){
    int count = 0;
    if (head == NULL ){
        cout << "List is empty "<< endl;
    }
    struct node *ptr = NULL;
    ptr = head ;
    while (ptr != NULL ){
        count++;
            cout << ptr ->data <<endl;
        ptr = ptr -> link;
    }
    cout << count << endl;
}
int main (){
    struct node *head = new node ();
    head -> data = 3;
    head -> link = NULL;

    struct node *current = new node ();
    current -> data = 4;
    current -> link = NULL;
    head -> link = current ;

    current = new node ();
    current -> data = 40 ;
    current -> link = NULL;
    head -> link -> link = current;

    cout << current -> data << endl;

    count_of_nodes(head);
}
