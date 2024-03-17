#include <bits/stdc++.h>
using namespace std ;
#define MAX 2
int Stack[MAX];
int top = -1 ;

bool isEmpty()
{
    if (top == -1){
        return 1;
    }
    else {
        return 0;
    }
}
bool isFull()
{
    if(top == MAX -1){
        cout << "Stack is Full ....." << endl;
    }
    else {
        cout << "Stack is not full " << endl;
    }

}
bool push (int num)
{
    if(top == MAX - 1){
        cout << "Stack Is Full" << endl;
    }
    top = top + 1;
    Stack[top] = num;

}
bool pop()
{   int value;
    if (top == -1){
        cout << " Stack is Empty "<< endl;
    }
    value = Stack[MAX];
    top = top -1;
    return value;

}
void show()
{
    if (top == -1){
        cout << " Stack is UnderFlow" << endl;
    }
    for (int i = top ; i >= 0 ;i--){
        cout << Stack[i] << "  ";
    }

}
int main ()
{

    push (13);
    push(45);
    push(22);
    push(67);
    pop();
    pop();
    pop();
    pop();
    pop();



    show();
}
