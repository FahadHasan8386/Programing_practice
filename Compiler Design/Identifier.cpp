#include <bits/stdc++.h>
using namespace std;

int main() {
    string keywords[] = {
        "int", "float", "double", "char", "long", "short", "void",
        "for", "while", "if", "else", "switch", "case", "return",
        "break", "continue", "do", "default", "class", "struct"
    };

    string s;
    cout << "Enter a string: ";
    cin >> s;

    bool valid = true;

    if (s.empty()) valid = false;


    else if (!(isalpha(s[0]) || s[0] == '_'))
        valid = false;


    else {
        for (int i = 1; i < s.size(); i++) {
            if (!(isalnum(s[i]) || s[i] == '_')) {
                valid = false;
                break;
            }
        }
    }


    if (valid) {
        for (string k : keywords) {
            if (s == k) {
                valid = false;
                break;
            }
        }
    }


    cout << (valid ? "Valid Identifier " : "Invalid Identifier") << endl;

    return 0;
}
