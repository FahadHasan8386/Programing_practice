#include<bits/stdc++.h>
using namespace std ;

int main ()
{
    int n ;
    vector<int>v;

    //while(1)
    //cin >> n;
    //Number 0 can not push
    while(cin >> n){
        if(n== 0 ){
            break;
        }
        v.push_back(n);
    }
    for (auto s : v){
        cout << s << " ";
    }

    vector <int> m ={1 , 3, 5,6, 3 ,8,};
    //sort the vector big to small in inder 3 ....++
    sort(m.begin() +3 , m.end() ,greater<int>());
    //Sort in reverse order
    sort(m.rbegin() , m.rend());
    for (auto s : m){
        cout << s << " " <<endl;
    }
}
