/// In the name of Allah

#include <bits/stdc++.h>
using namespace std;


void fun(const vector<int>& v, int i) {
    if (i < 0) {
        return;
    }
    if (i % 2 == 0) {
        cout << v[i] << " ";
    }
    fun(v, i - 1);
}

int main() {
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }


    fun(v, n - 1);

    return 0;
}
