#include <bits/stdc++.h>
using namespace std ;

int main ()
{
    vector<long long> v = { 1 , 1 , 2 , 4 ,5  ,6 , 5 , 5, 6, 6};

    map<long long , int >cnt;


    for(auto u : v) cnt[u]++;

    for (auto u : cnt)
    {
        cout << u.first << " " << u.second << endl;
    }

}
