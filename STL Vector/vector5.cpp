#include<bits/stdc++.h>
using namespace std;

int main ()
{
    vector<int>v = {1 ,3 ,4, 5};

    vector <int>::iterator it;
    //Iterator is object (like pointer)point to v.
    for (it = v.begin() ;it != v.end() ;it++){
        //print the iterator point value
        cout << *it << " ";
    }
    cout <<endl;
    //for each loop
    for (int s : v){
        cout << s << " ";
    }

}
