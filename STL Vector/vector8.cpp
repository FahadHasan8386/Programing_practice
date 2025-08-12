#include<bits/stdc++.h>

using namespace std ;

int main()
{
    vector<int>v = {1 ,2 ,3  ,4};

    vector<int>v1 = {100 ,2 ,3  ,4};

    vector<int> :: iterator it;

    for(it = v1.begin() ;it != v1.end() ;it++)
    {
        cout << *it << endl;
    }
    cout << endl;
}
