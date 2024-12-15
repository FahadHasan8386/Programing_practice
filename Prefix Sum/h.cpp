/// In the name of Allah

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int n = s.size();
    int t;
    cin >> t;

    vector<int>pref(n+1 ,0);
    for(int i = 0 ; i < n;i++)
    {
        pref[i+1] = pref[i] + (s[i] == 'a' ? 1 : 0);
    }

    while (t--)
    {
        int l, r;
        cin >> l >> r;

        int count = pref[r] - pref[l-1];
        cout << count << endl;
    }
    return 0;
}
