#include <bits/stdc++.h>
using namespace std ;

void fahad()
{
    int n ;
    cin >> n;

    vector<int>v(n);

    for(int i = 0 ; i < n ;i++)cin >> v[i];

    v.erase(unique(v.begin(),v.end()) , v.end());
    n = v.size();

    int longest_chain = 1, cur = 1;

    for(int i = 1 ; i < n ;i++)
    {
        if(v[i] == v[i-1]+ 1)
        {
            cur++;
        }
        else{
            cur = 1;
        }
        longest_chain = max(longest_chain, cur);
    }
    int ans = n - longest_chain + 1;
    cout << ans << endl;
}

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        fahad();
    }
}
