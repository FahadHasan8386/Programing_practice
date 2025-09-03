#include <iostream>
#include <string>
using namespace std;

bool isDeclaration(string s) {
    if (s.back() == ';' && s.find('(') != -1 && s.find(')') != -1) {
        return true;
    }
    return false;
}

bool isDefinition(string s) {
    if (s.find('{') != -1 && s.find('}') != -1 &&
        s.find('(') != -1 && s.find(')') != -1) {
        return true;
    }
    return false;
}

int main() {
    string line;
    cout << "Enter line: ";
    getline(cin, line);

    if (isDefinition(line)) {
        cout << "Function Definition" << endl;
    }
    else if (isDeclaration(line)) {
        cout << "Function Declaration" << endl;
    }
    else {
        cout << "Not a valid function " << endl;
    }

    return 0;
}
