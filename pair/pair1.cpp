#include <bits/stdc++.h>
using namespace std ;

int main ()
{
    pair <string ,vector<int>> p;

    p.first = "Fahad";
    p.second = {1 ,2,3};

    cout << p.first <<endl;

    for(auto u : p.second)
    {
        cout << u << " ";
    }
    cout << endl;
}
