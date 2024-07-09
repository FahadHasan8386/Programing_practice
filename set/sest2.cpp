#include <bits/stdc++.h>
using namespace std ;

int main ()
{
    set<int> s = {1 ,1 ,2 ,3 ,4, 5, 6 ,7 ,7};

    set<int> :: iterator it;

    for (it = s.begin() ; it != s.end() ;it++)
    {//print onlu=y unique value
        cout << *it << " ";
    }
    cout << endl;
//clear value
    s.clear();
//insert value
    s.insert(2);
    s.insert(2);


    cout << s.size()<< endl;

    for (auto u : s)
    {
        cout << u << " " ;
    }
    cout << s.cout(2) << endl;
}
