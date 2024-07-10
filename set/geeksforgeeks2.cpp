#include <bits/stdc++.h>
using namespace std;

set<int> setInsert(int arr[], int n)
{
    set<int> s;
    for (int i = 0; i < n; i++)
    {
        s.insert(arr[i]);
    }
    return s;
}

void setDisplay(const set<int>& s)
{
    for (auto u : s) cout << u << " ";
    cout << endl;
}

void setErase(set<int>& s, int x)
{
    if (s.count(x) == 1)
    {
        s.erase(x);
        cout << "erased " << x << endl;
    }
    else
    {
        cout << "not found" << endl;
    }

}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int arr[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        set<int> s = setInsert(arr, n);

        setDisplay(s);

        int x;
        cin >> x;

        setErase(s, x);
        setDisplay(s);
    }
    return 0;
}
