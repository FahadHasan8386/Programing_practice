#include <bits/stdc++.h>
using namespace std ;

int main ()
{
    set<pair<int,int>> s;

    s.insert({2 ,3});
    s.insert({1 ,3});
    s.insert({1 ,3});
    s.insert({2 ,4});
    s.insert({4 ,3});
    s.insert({2 ,3});
    s.insert({1 ,5});

    cout << s.size() <<endl;

    for (auto u : s)
    {
        cout << "s : " << u.first << " " << u.second <<endl;
    }

    set<int,greater<int>> s1;

    s1.insert(2);
    s1.insert(3);
    s1.insert(1);
    s1.insert(1);
    s1.insert(7);
    s1.insert(0);
    s1.insert(1);

    cout << s1.size() <<endl;

    for (auto u1 : s1)
    {
        cout << u1 <<endl;
    }
}
