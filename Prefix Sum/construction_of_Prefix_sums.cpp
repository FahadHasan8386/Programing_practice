///In the name of Allah

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n ;
    cin >> n;

    vector<int>v(n);
    vector<long long>v2(n+1 , 0);
    v2[0] = 0;

    for(int i = 0 ;  i < n ;i++)
    {
        cin >> v[i];
        v2[i+1] = v2[i] + v[i];
    }

    for(int i = 0 ;i < n+1;i++)
    {
        cout << v2[i] << " ";
    }
    return 0;
}
