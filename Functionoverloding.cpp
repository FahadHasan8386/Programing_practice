#include <iostream>
using namespace std;

void number(int x,int y)
{
    int sum = x + y;
        cout << "Sum : "<<sum <<endl;
}
void number(int p,int q,int r)
{
    int sum = p + q + r;
        cout << "Sum : "<<sum <<endl;
}
int main()
{
    number=(19,20);
    number=(10,20,30);
}

