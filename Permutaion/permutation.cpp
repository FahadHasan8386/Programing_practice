///In the name of Allah
#include <bits/stdc++.h>
using namespace std ;
void print(vector<int>&v ,int n)
{
    for(int i = 0 ; i < n ; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}
int main ()
{
    /*string s;
    cin >> s;
    sort(s.begin(),s.end());
    while(next_permutation(s.begin(),s.end()))
    {
        cout << s << endl;
    }

    */

    vector<int>v;
    int n;
    cin >> n;
    int x;
    for (int i = 0 ; i < n ;i++)
    {
        cin >> x;
        v.push_back(x);
    }

    while(next_permutation(v.begin(),v.end()))
    {
        print(v ,n);
    }
}
