#include <bits/stdc++.h>
using namespace std ;

int main ()
{
    string s = "xxxxxFahad Hasanxxxx";
    //remove all xxxxxx

    s.erase(remove (s.begin(), s.end(), 'x') , s.end());
    cout << s << endl;


    //found sub string
    if(s.find("san") != -1)
    {
        cout << "Sub string is found";
    }
    else{
        cout << "Not Found";
    }
}
