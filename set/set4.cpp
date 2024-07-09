#include <bits/stdc++.h>
using namespace std ;

int main()
{
    set<pair<int,int>,greater<pair<int,int>>> s;

    s.insert({2,3});
    s.insert({1,3});
    s.insert({1,3});
    s.insert({2,4});
    s.insert({4,3});
    s.insert({2,3});
    s.insert({1,5});

    cout << s.size() <<endl;

    for (auto u : s)
    {
        cout << "s : " << u.first << " " << u.second <<endl;
    }
}

