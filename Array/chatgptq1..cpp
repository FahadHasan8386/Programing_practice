/// in the name of Allah

#include <bits/stdc++.h>
using namespace std ;

void fahad()
{
    int n , k;
    cin >> n >> k;

    vector<int>a(n),b(n);
    for(int i = 0 ; i < n ;i++)cin >> a[i];
    for(int i = 0 ; i < n ;i++)cin >> b[i];
    int mx = 0 , mn = INT_MAX;
    for(int i = 0 ; i < n ;i++){
        mx = max(mx ,a[i]);
        mn = min(mn ,a[i]);
    }
    int re = mx -mn;
    cout << (k - re) + 1 << endl;

}

int main ()
{
    int  t;
    cin >>  t;

    while(t--)
    {
        fahad();
    }
}
