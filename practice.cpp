#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>number(5);

    for(int i = 0 ; i < 5 ;i++){
        cin >> number[i];
    }
    sort(number.begin(),number.end());

    cout << number[2];
}
