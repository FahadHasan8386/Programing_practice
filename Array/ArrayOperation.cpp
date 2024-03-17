#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int k, i, n=5, mimo[10]={2, 3, 5, 6, 7};

        mimo[n++] = 8;

    for(i=n; i>0; i--){
         mimo[i] = mimo[i-1];
        mimo[0] = 1; n++;

    }

    k = 3;
    for(i=n; i>k; i--)
    {
        mimo[i] = mimo[i-1] ;
        mimo[k] = 4; n++;
    }
    for (int i = 0 ; i < n ;i++){
        cout << mimo[i];

    }
}
