///In the name of Allah

#include <bits/stdc++.h>
using namespace std ;

void fun2 (int c)
{
    if(c > 0)
    {
        fun2(c - 1);
        cout << c << " ";
    }
}
int main ()
{

    int y = 4;

    fun2(y);
    return 0;

}
