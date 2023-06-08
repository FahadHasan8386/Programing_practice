#include <iostream>
using namespace std;

int reg (int m)
{
    if (m==1)
        return 1;
    else
        return m*(m-1);

}
int main ()
{
   int recursion = reg (4);
    cout << recursion;
}
