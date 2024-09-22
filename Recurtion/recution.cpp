///In the name of Allah

#include <bits/stdc++.h>
using namespace std ;

int fib(int n)
{
    if(n == 0)
    {
        return 0;
    }
    else if(n == 1 || n == 2)
    {
        return 1;
    }
    else{
        return (fib(n - 1) + fib(n - 2));
    }
}

int main ()
{
    int x ;
    cin >> x;

    for (int i = 0 ; i < x; i++)
    {
        cout << fib(i) << " ";
    }
    return 0;
}
