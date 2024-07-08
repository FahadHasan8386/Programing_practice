#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int t ;
    cin >> t;

    for(int i = 1 ; i <= t ;i++)
    {
        int n , m;
        cin >> n >> m ;

        map<pair<int,int>,bool> vis;
        bool done = 1;
        while(m--)
        {
            int a , b;
            cin >> a >> b;

            if(vis[{a,b}]) done = 0;
            vis[{a,b}]  = 1;

        }
        if(done == 1)
        {
            cout << i << "Possible" <<endl;
        }
        else{
            cout << i << "Impossible" << endl;
        }

    }
}
