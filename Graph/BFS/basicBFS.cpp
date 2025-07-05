///In the name of Allah
#include <bits/stdc++.h>
using namespace std ;

void bfs(int n ,vector<int>adj[] ,int src)
{
    vector<bool>visited(n+1 ,false);
    vector<int> level(n+1 , -1);

    queue<int>q;
    q.push(src);
    visited[src] = true;
    level[src] = 0;

    while(!q.empty())
    {
        int node = q.front();
        q.pop();

        for(int neighbor : adj[node])
        {
            if(!visited[neighbor])
            {
                visited[neighbor] = true;
                level[neighbor] = level[node] + 1;
                q.push(neighbor);
            }
        }
    }
    for(int i = 1 ; i <= n ;i++)
    {
        cout << "Node " << i << " : " << level[i] << endl;
    }
}

int main()
{
    int n = 6;
    vector<int> adj[n+1];

    adj[1].push_back(2);
    adj[2].push_back(1);
    adj[1].push_back(3);
    adj[3].push_back(1);
    adj[2].push_back(4);
    adj[4].push_back(2);
    adj[3].push_back(5);
    adj[5].push_back(3);
    adj[5].push_back(6);
    adj[6].push_back(5);

    bfs(n, adj, 1);

    return 0;
}
