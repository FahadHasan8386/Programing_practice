#include <bits/stdc++.h>
using namespace std ;

int main ()
{
    pair<int ,int> p ,p1;

    p = {2 ,3};
    p1 = {2, 4};

    if(p > p1)
    {
        cout <<"YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    pair<int ,int> pp = max(p, p1);

    cout << pp.first << " " <<pp.second << endl;
}
