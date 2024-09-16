///In the name of Allah

#include <bits/stdc++.h>
using namespace std ;

int main ()
{
    int t;
    cin >> t;

    set<int>s;

    while(t--)
    {
        int type ,value;
        cin >> type >> value;

        if(type == 1)
        {
            s.insert(value);
        }
        else if(type == 2)
        {
            s.erase(value);
        }
        else if(type == 3)
        {
            if(s.find(value) != s.end())
            {
                cout << "Yes" <<endl;
            }
            else{
                cout << "No" << endl;
            }
        }
    }

}
