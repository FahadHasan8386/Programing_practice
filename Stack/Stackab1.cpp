#include<iostream>

using namespace std;
class St{
private:
 int Stk[50];
 int top;
public:
 St()
 {
 top = -1;
 }
 bool isFULL()
 {
 if(top == 50 -1)return true;
 else return false;
 }
 bool isEmpty()
 {
 if(top == -1)return true;
 else return false;
 }
 void push(int val)
 {
 Stk[++top] = val;
 }
 void pop()
 {
 --top;
 }
 int getTop()
 {
 if(top == -1)
 {
 cout << "Stack Empty " <<endl;
 return -1;
 }
 else return Stk[top];
 }
 void show()
 {
 if(top == 50 -1)
 {
 cout << "STACK FULL" << endl;
 }
 else
 {
 for(int i = 0; i <=top; i++)
 {
 cout << Stk[i] << " ";
 }
 }
 cout << endl;
 }
};
int main(){
 St Stack;
 Stack.push(100);
 Stack.push(20);
 Stack.push(31);
 Stack.push(11);
 Stack.pop();
 Stack.pop();
 Stack.push(42);
 Stack.pop();
 Stack.show();
 }
