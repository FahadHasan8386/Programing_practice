#include <bits/stdc++.h>
using namespace std ;

int main ()
{
    //how many element in vector
    int n ;
        cin >> n;
     //vector diclaretion
    vector <int> v;
    //input from user
    for (int i = 0 ; i < n ; i++){
        //a = 1
        int a ;
            cin >> a;
        //v[0] = 1
        v.push_back(a);
    }
    //output vector element
    for (int i = 0 ; i < n ;i++)
    {
        cout << v[i] << "  " ;
    }
    cout << endl;
    //show the size of vector
    cout << v.size() << endl;
}
