#include <bits/stdc++.h>
using namespace std ;
int main ()
{
    //diclaleretion and initialization
    vector<int>v = {1 ,2 ,3};

    cout << v.size() << endl;
    //Resize the vector and v[3] ....v[9] = 0;
    v.resize(10);
    cout << v.size() << endl;

    vector<int>m;
    cout << m.size() <<endl;

    //array type diclaretion
    vector<int>n(10,5);
    //vector copy the value with n vector
    m = n;
    for (int i = 0 ; i < m.size() ;i++)
    {
        cout << m[i] << " ";
    }


}
