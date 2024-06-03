#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;
        string a;
        cin >> a;
        int count[7] = {0};

        for (char c : a) {
            count[c - 'A']++;
        }

        int cnt2 = 0;

        for (int i = 0; i < 7; i++) {
            if (count[i] < m) {
                cnt2 += (m - count[i]);
            }
        }

        cout << cnt2 << endl;
    }


}
