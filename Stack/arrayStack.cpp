#include <bits/stdc++.h>
using namespace std;
#define Max 4
    int stack_arr[Max];
    int top = -1;

void push(int data ){
    if (top == Max -1 ){
        cout <<"Stack is Overflow";
        return;
    }

    top = top + 1;
    stack_arr[top] = data;
}
int main (){
    push(1);
    push(2);
    push(3);
    push(4);
    //push(5);


}
