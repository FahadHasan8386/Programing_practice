#include <bits/stdc++.h>
using namespace std ;

int main()
{
    vector<int>v = {1 ,2 ,4 ,6,5 ,4 ,1 ,10};

    vector<int> :: iterator it  = max_element(v.begin() , v.end());

    cout << *it << endl;
    vector<int> :: iterator itt  = max_element(v.begin()+ 1 , v.begin() +5);

    cout << *itt << endl;

    vector<int> :: iterator it2  = min_element(v.begin() , v.end());

    cout << *it2 << endl;
}
