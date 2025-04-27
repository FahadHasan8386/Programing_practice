/// In the name of Allah
#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define endl '\n'


ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }

int main() {
    fastio();
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);

    unordered_map<int, int> freqA;

    for (int i = 0; i < n; i++) cin >> a[i];

    for (int i = 0; i < m; i++) cin >> b[i];

    // Frequency map for array a[]
    for (int num : a) {
        freqA[num]++;
    }

    // Check if each element in b[] is present in a[]
    for (int num : b) {
        if (freqA[num] == 0) {
            cout << "false" << endl;  // Output false if b[] is not a subset of a[]
            return 0;
        }
        freqA[num]--;
    }

    // If all elements in b[] are found in a[] with sufficient frequency
    cout << "true" << endl;  // Output true if b[] is a subset of a[]
    return 0;
}
