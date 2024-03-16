#include <bits/stdc++.h>
using namespace std;
int main()
{
    int mimo[5], a, b, i;
    mimo[2] = 75;
    a = mimo[2];
        cin >> mimo[2];

    for(i=0; i<5; i++){
        cin >> mimo[i];
    }

    for(i=0; i<5; i++){
         cout << mimo[i] << "  ";
    }

    a = 4;
    mimo[2] = a;
    mimo[a] = 3;
    b = mimo[a-2] + 2;
    cout << b << endl;
    mimo[mimo[a]] = mimo[2] + b;
        cout << mimo[a] << endl;
        cout << mimo[3];

}
