#include <bits/stdc++.h>
using namespace std ;

int main ()
{
    int n;
    cin >> n ;

    string s;

    map<string, int >cnt;

    while(n--)
    {
        cin >> s;
        if(cnt[s] == 1)
        {
            cout << "YES" <<endl;
        }
        else
        {
            cout << "NO" << endl;
        }
        cnt[s] = 1 ;
    }
}
