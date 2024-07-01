#include <bits/stdc++.h>
using namespace std ;

int main ()
{
    int t;
    cin >> t;

    while(t--)
    {
        string s ;
        cin >> s;

        int digit_sum = 0;

        for(auto u : s)
        {
          digit_sum += (u - '0');
        }
        string str = to_string(digit_sum);

        string tmp = str;
        reverse(tmp.begin(),tmp.end());

        if(tmp == str)
        {
            cout << "yes";
        }
        else{
            cout << "NO";
        }
    }
}
