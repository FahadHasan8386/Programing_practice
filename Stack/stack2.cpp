#include <bits/stdc++.h>
using namespace std;

bool isbalanced(char c1, char c2) {
    return (c1 == '(' && c2 == ')') || (c1 == '{' && c2 == '}') || (c1 == '[' && c2 == ']');
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;
        stack<char> st;
        bool done = true;

        for (auto u : s) {
            if (u == '(' || u == '{' || u == '[') {
                st.push(u);
            } else {
                if (st.empty()) {
                    done = false;
                    break;
                } else {
                    if (isbalanced(st.top(), u)) {
                        st.pop();
                    } else {
                        done = false;
                        break;
                    }
                }
            }
        }

        if (!st.empty()) done = false;

        if (done) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
