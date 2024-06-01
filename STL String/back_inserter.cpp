#include <bits/stdc++.h>
using namespace std ;

int main ()
{
    string s = "Fahad";

    string f = "hju Hasan";

    copy(f.begin()+3 , s.begin()+9 , back_inserter(s));

    cout << s << endl;
}
