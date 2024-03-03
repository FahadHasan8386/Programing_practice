#include <bits/stdc++.h>
using namespace std;
#define Max 4

    int stack_arr[Max];
    int top = -1;

void push (int data)
{
    if (top == Max -1)
    {
        cout << "Over Flow"<< endl;
        return;
    }
    top = top + 1;
    stack_arr[top] = data;
}
void pop()
{
    int value;
    if(top == -1)
    {
        cout << "NO enelent in the stack" << endl;
    }
    value = stack_arr[top];
    top = top -1;

}

void show()
{
    if(top == -1)
    {
        cout << "NO enelent in the stack" << endl;
    }

    for (int i = top ; i >= 0 ;i--){
        cout << stack_arr[i] << " " ;
    }
}


int main ()
{
    push(1);
    push(2);
    push(3);
    push(4);
    pop();
    pop();
    pop();
    pop();
    //pop();

    show();
}
