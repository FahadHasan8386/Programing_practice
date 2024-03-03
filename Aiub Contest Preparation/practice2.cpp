#include <iostream>
#include <string>
using namespace std;

int main() {
    string word, s = "iloveyou";
    cin >> word;

    int cnt = 0;
    for (char a : word) {
        if (a == s[cnt]) {
            cnt++;
            if (cnt == s.size()) {
                cout << "Yes";
                return 0;
            }
        }
    }

    cout << "NO" << endl;
    return 0;
}
