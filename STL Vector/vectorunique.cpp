#include <bits/stdc++.h>
using namespace std;

int main ()
{
    vector<int>num = {2 ,3 ,5 ,5 ,5, 7, 7, 1};

    sort (num.begin(),num.end());
    int sz =  unique(num.begin(),num.end()) -  num.begin();
    cout << sz;
    for (int i = 0 ; i < sz ; i++){
        cout << num[i] << " ";
    }
}
