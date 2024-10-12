///In the name of Allah

#include <bits/stdc++.h>
using namespace std;

int fun(int n)
{
    if(n == 1)
    {
        return 1;
    }
    else
    {
        return (n * fun(n-1));
    }
}

int main ()
{
    int n;
    cin >> n;
    cout << fun(n) << endl;
}
