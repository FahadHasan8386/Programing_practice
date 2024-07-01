#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;

        string temp = s;
        reverse(temp.begin(), temp.end());

        if(s == temp)
        {
            cout << "yes" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
