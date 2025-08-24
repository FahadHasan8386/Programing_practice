/// In the name of Allah
#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define endl '\n'


ll gcd(ll a, ll b)
{
    return b ? gcd(b, a % b) : a;
}

set<string> se;

void generateAll(string s)
{
    if(s.empty())return ;
    if(se.count(s))return;
    se.insert(s);///unique string insert on the set


    if (s.size() >= 1) {
        string t = s;
        t.erase(0, 1); ///Remove korbe first element
        generateAll(t);///generate the new string
    }
    if (s.size() >= 2) {
        string t = s;
        t.erase(1, 1); ///Remove korbe second element
        generateAll(t);///generate the new string
    }
}

void fahad()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    se.clear();

    generateAll(s);

    cout << se.size() << endl;
}

int main()
{
    fastio();
    int t = 1;
    cin >> t;
    while (t--) fahad();
}
