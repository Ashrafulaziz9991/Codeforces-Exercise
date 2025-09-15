/*

# problem link https://codeforces.com/problemset/problem/20/C

input 

5 6
1 2 2
2 5 5
2 3 4
1 4 1
4 3 3
3 5 1

output`
1 4 3 5

*/

#include <bits/stdc++.h>
using namespace std;

#define ff first
#define ss second
#define pii pair<int,int>
#define vi vector<int>
#define mp make_pair
#define ll long long
#define ull unsigned long long
#define pb push_back
#define ps push_front
#define pf push_front
#define mp make_pair
#define fast_in_out ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

const int N = 1e5 + 5;
const long long INF = 1e18;

void dijkstra(int src, vector<vector<pii>> &adj_list, int nodes, vector<ll> &d, vector<int> &visited, vector<int> &parent)
{
    for(int i = 1; i <= nodes; i++)
        d[i] = INF;
    d[src] = 0;

    priority_queue<pii> pq;
    // it's reversed priority queue, smallest element will be on the top
    // {distance, node}

    pq.push({0, src}); // {distance, node}

    while(!pq.empty())
    {
        pii node = pq.top();
        pq.pop();

        int selected_node = node.ss;
        if(visited[selected_node] == 1)
            continue;
        visited[selected_node] = 1;

        for (auto adj_entry : adj_list[selected_node])
        {
            int adj_node = adj_entry.ff;
            int adj_cst = adj_entry.ss;

            if(d[selected_node] + adj_cst < d[adj_node])
            {
                d[adj_node] = d[selected_node] + adj_cst;
                parent[adj_node] = selected_node;
                pq.push({-d[adj_node], adj_node});
            }
        }
    }
}

int32_t main()
{
    fast_in_out;

    int nodes, edges;
    cin >> nodes >> edges;
    // vector<pii> adj_list[nodes + 1];
    vector<vector<pii>> adj_list(nodes + 1);
    vector<ll> d(nodes + 1);
    vector<int> visited(nodes + 1, 0);
    vector<int> parent(nodes + 1, -1);

    for(int i = 0; i < edges; i++)
    {
        int u, v, cst;
        cin >> u >> v >> cst;
        adj_list[u].pb({v, cst});
        adj_list[v].pb({u, cst});
    }

    int src = 1;
    dijkstra(src, adj_list, nodes, d, visited, parent);

    if(visited[nodes] == 0){
        cout << -1 << "\n";
        return 0;
    }

    vector<int> path;
    int selected_node = nodes;
    while(1)
    {
        path.pb(selected_node);
        if(selected_node == src)
            break;
        selected_node = parent[selected_node];
    }
    reverse(path.begin(), path.end());

    for(auto node : path)
        cout << node << " ";
    return 0;
}