#include <bits/stdc++.h>
using namespace std ;

int main ()
{
    //Array diclaretion
    int arr[] = {1 , 3, 4,5, 6,7,78 };
    //Vector diclaretion
    vector<int>v = {1 ,2 ,3 , 5};

    cout << v.size() << endl;

    cout << v.empty() << endl;

    for (int i = 0 ; i < v.size() ;i++){
        cout << v[i] << "   ";
    }
    //clear all the element
    v.clear();
    cout << endl;
    //size == 0;
    cout << v.size() <<endl;
    //print 1
    cout << v.empty() << endl;
}
