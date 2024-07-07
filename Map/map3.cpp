#include <bits/stdc++.h>
using namespace std ;


int main ()
{
    vector<int>v = {1 , 2, 3, 4,5,1,1};

    map<long long, int >cnt;

    for (auto u : v)
    {
        cnt[u]++;
    }
    for (auto u : cnt )
    {
        cout << cnt[1] ;
        return 0;
    }


}
