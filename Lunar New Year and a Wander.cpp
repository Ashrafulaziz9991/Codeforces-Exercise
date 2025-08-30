/*
problem link https://codeforces.com/problemset/problem/1106/D
*/

#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;

vector<int> visited(N);
vector<vector<int>> adj_list(N);

// void dfs(int src)
// {
//     cout << src <<" ";
//     visited[src] = 1;

//     for (auto adj_node : adj_list[src])
//     {
//         if (visited[adj_node] == 0)
//             dfs(adj_node);
//     }
// }

void bfs(int src)
{
    visited[src] = 1;
    priority_queue<int, vector<int>, greater<int>> pq;
    pq.push(src);

    while (!pq.empty())
    {
        int head = pq.top();
        pq.pop();
        cout << head << " ";
        for (auto adj_node : adj_list[head])
        {
            if (visited[adj_node] == 0)
            {
                visited[adj_node] = 1;
                pq.push(adj_node);
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int node, edges;
    cin >> node >> edges;

    for (int i = 0; i < edges; i++)
    {
        int u, v;
        cin >> u >> v;
        adj_list[u].push_back(v);
        adj_list[v].push_back(u);
    }

    int src = 1;
    bfs(src);
    return 0;
}