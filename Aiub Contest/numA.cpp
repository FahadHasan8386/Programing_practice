#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; ++i) {
        int a, b, c;
        cin >> a >> b >> c;
        int sides[3] = {a, b, c};
        sort(sides, sides + 3);

        if (sides[0]*sides[0] + sides[1]*sides[1] == sides[2]*sides[2]) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
