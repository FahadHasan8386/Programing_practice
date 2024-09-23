///In the name of Allah

#include <bits/stdc++.h>
using namespace std ;

//global veriable
//int x = 0;

int fun (int n)
{
    //static variable
    static int x = 0;
    if(n > 0)
    {
        x++;
        return fun(n-1) + x;
    }
    return 0;
}

int main ()
{
    int r = fun (5);// x = 5
    cout << r << endl;

    r = fun (5); //x = 10
    cout << r << endl;

    r = fun (5);//x = 15
    cout << r << endl;
}
