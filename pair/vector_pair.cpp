#include <bits/stdc++.h>
using namespace std ;
int main()
{
    vector<pair<int ,int>>v;

    v.push_back({6 ,5});
    v.push_back({2 ,5});
    v.push_back({4 ,2});
    v.push_back({6 ,1});
    v.push_back({1 ,9});

    sort (v.begin(),v.end() );

    for (auto u : v)
    {
        cout << u.first <<  " " <<u.second <<endl;
    }
}
