#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>v = {1 , 3 , 1, 5};

    cout <<v.back() <<endl;

    //Delete the last element
    v.pop_back();
    cout << v.back() <<endl;

    //value print korar jonno
    cout << *v.end() <<endl;
    //fully delete and sifted the element
    v.erase(v.begin());

}
