#include <bits/stdc++.h>
using namespace std ;

void insert(set<int> &s ,int x)
{
    s.insert(x);
}
void print_contents(set<int> &s)
{
    for(auto u : s)
    {
        cout << u << " ";
    }
}
void erase(set<int> &s ,int x)
{
    s.erase(x);
}
int find (set<int> &s ,int x)
{
    if(s.count(x) == 1)return 1;
    else return -1;
}
int size(set<int> &s )
{
    return s.size();
}

int main ()
{
    int t ;
    cin >> t ;

    while(t--)
    {
        set<int>s;
        int q;
        cin >> q;

        while(q--)
        {
            char c;
            cin >> c;

            if(c == 'a')
            {
                int x;
                cin >> x;
                insert(s ,x);
            }
            if(c == 'b')
            {
                print_contents(s);
            }
            if(c == 'c')
            {
                int x;
                cin >> x;
                erase(s ,x);
            }
            if(c == 'd')
            {
                int x;
                cin >> x;
                cout << find(s ,x) << " ";
            }
            if(c == 'e')
            {
                cout << size(s) << " " ;
            }
        }
        return 0;
    }
}
