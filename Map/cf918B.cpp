#include <bits/stdc++.h>
using namespace std ;

int main ()
{
    int t ,y;
    cin >> t >> y;
    map<string ,string>ipname;
    for (int i = 0 ; i < t ; i++)
    {
        string name ,ip;
        cin >> name >> ip;

        ipname[ip] = name;
    }
    while(y--)
    {
        string s1 ,ip;
        cin >> s1 >> ip;

        ip.pop_back();

        cout << s1 << " "<< ip << "; #" << ipname[ip] << endl;;
    }
}
