///In the name of Allah

#include <bits/stdc++.h>
using namespace std ;

int main ()
{
    set<int,greater<int>>s1;
//O(log n)
    s1.insert(2);
    s1.insert(4);
    s1.insert(5);
    s1.insert(1);
    s1.insert(2);
    s1.insert(5);
    s1.insert(1);
    s1.insert(3);
    s1.insert(6);


    set<int ,greater<int>>:: iterator it;
//O(n)
    for(it = s1.begin() ;it != s1.end() ;it++)
    {
        cout << *it << " ";
    }
    cout << endl;
    set<int>s2;
    s2.insert(s1.begin(),s1.end());
    for(it = s2.begin() ;it != s2.end() ;it++)
    {
        cout << *it << " ";
    }

    cout << endl;

    s2.erase(s2.begin(),s2.find(3));
    for(it = s2.begin() ;it != s2.end() ;it++)
    {
        cout << *it << " ";
    }

    cout << endl;

    s2.erase(5);
    for(it = s2.begin() ;it != s2.end() ;it++)
    {
        cout << *it << " ";
    }
}
