///In the name of Allah

#include <bits/stdc++.h>
using namespace std ;

int main ()
{
    queue<int>q;
    q.push(1);
    q.push(3);
    q.push(5);
    q.push(6);
    q.push(2);
    q.push(8);

    cout << q.front() << endl;

    q.pop();
    cout << q.front() << endl;
    cout << q.empty() << endl;

    while(!q.empty())
    {
        cout << q.front() + 1 << endl;
        q.pop();
    }
}
