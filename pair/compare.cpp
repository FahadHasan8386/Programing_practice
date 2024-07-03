#include <bits/stdc++.h>
using namespace std ;

int main ()
{
    vector<pair<string,int>> v;

    v.push_back({"Fahad" , 33});
    v.push_back({"yasan" , 22});
    v.push_back({"zvi" , 13});
    v.push_back({"Imran" , 77});
    v.push_back({"Sadman" , 55});

    sort(v.begin() ,v.end());

    for(auto u : v )
    {
        cout << u.first << " " <<u.second <<endl;
    }
}
