#include <bits/stdc++.h>
using namespace std ;

int main (){
    int a , b , c , d , e;

        cin >> a >> b >> c >> d >> e ;
    int sum = 0 ;
   if (a % 2 != 0)
        {
            sum += a;
        }
    if (b % 2 != 0)
    {
        sum += b;
    }
    if (c % 2 != 0)
    {
        sum += c;
    }
    if (d % 2 != 0)
    {
        sum += d;
    }
    if (e % 2 != 0)
    {
        sum += e;
    }
    cout << "Sum of odd num : " <<  sum;
}
