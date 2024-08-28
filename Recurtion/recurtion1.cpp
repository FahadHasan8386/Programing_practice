#include <bits/stdc++.h>
using namespace std;

void printfib(int a, int b, int n)  // Added return type 'void'
{
    if (n == 0)
    {
        return;
    }
    int c = a + b;
    cout << c << " ";  // Added space for better readability
    printfib(b, c, n - 1);
}

int main()
{
    int a = 0;
    int b = 1;
    cout << a << " " << b << " ";
    int n = 7;
    printfib(a, b, n - 2);
}
