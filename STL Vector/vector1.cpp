#include <bits/stdc++.h>
using namespace std;

int main ()
{
    //array
    int a[4];
    //vector Diclaretion
    vector<int>v;
    //push the value in index v[0]
    v.push_back(1);
    v.push_back(2);
    v.push_back(4);
        //print 4
        cout << v[2] << endl;
    //print all the element in vector
    for (int i = 0 ; i < v.size() ;i++)
    {   //store new value in v[2]
        v[2] = 50;
        cout << v[i] << "  ";

    }
    //print 50
    cout << v[2] << endl;
}
