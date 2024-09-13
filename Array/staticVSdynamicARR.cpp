///In the name of Allah

#include <bits/stdc++.h>
using namespace std ;

int main ()
{
    ///using normal array
    int arr[10];

   /*for(int i = 0 ; i < 10 ; i++)
    {
        cout << &arr[i] << endl;
    }*/


    ///using pointer to use dynamic array
    int *p;

    p = new int[3];

    for(int i = 0 ; i < 3 ;i++)
    {
        cin >> p[i];
    }

    for(int i = 0 ; i < 3 ; i++)
    {
        cout << p[i] << endl;
    }

}
