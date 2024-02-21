#include<iostream>
#include<string>
using namespace std;

int main() {
    string num1;
    cin >> num1;

    int cnt = 1;
    bool dangerous = false;

    for(int i = 1; i < num1.size(); i++) {
        if(num1[i] == num1[i - 1]) {
            cnt++;
            if(cnt >= 7) {
                dangerous = true;
                break;
            }
        } else {
            cnt = 1;
    }
    }
    if(dangerous) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}

