#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s,s1;
    cin >> s >> s1;

    for (int i = 0 ; i < s.size();i++)
    {
        s[i] = tolower(s[i]);
    }
    for (int i = 0 ; i < s1.size();i++)
    {
        s1[i] = tolower(s1[i]);
    }
    if(s > s1)
    {
        cout << "1" << endl;
    }
    else if(s < s1)
    {
        cout << "-1" << endl;
    }
    else {
        cout << "0" << endl;
    }
}
