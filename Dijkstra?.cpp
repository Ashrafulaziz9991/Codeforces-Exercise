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

const int N = 1e5;
const long long INF = 1e18;


vector<int> visited(N) , parent(N);
vector<long long> d(N);
// vector<vector<pair<int, int>>> adj_list(N);

vector<pair<int, int>> adj_list[N];

int nodes, edges;

// void dijkstra(int src, vector<vector<pair<long long, int>>> &adj_list, int nodes, vector<long long> &d, vector<int> &visited, vector<int> &parent)
void dijkstra(int src)
{
    for(int i = 1; i <= nodes; i++)
        d[i] = INF;
    d[src] = 0;

    priority_queue<pair<long long, int>, vector<pair<long long, int>>, greater<pair<long long , int>>> pq;
    // priority_queue<pair<long long, int>> pq;
    // it's reversed priority queue, smallest element will be on the top
    // {distance, node}

    pq.push({0, src}); // {distance, node}

    while(!pq.empty())
    {
        pair<long long, int> node = pq.top();
        pq.pop();

        int selected_node = node.second;
        if(visited[selected_node] == 1)
            continue;
        visited[selected_node] = 1;

        for (auto adj_entry : adj_list[selected_node])
        {
            int adj_node = adj_entry.first;
            int adj_cst = adj_entry.second;

            if(d[selected_node] + adj_cst < d[adj_node])
            {
                d[adj_node] = d[selected_node] + adj_cst;
                parent[adj_node] = selected_node;
                pq.push({d[adj_node], adj_node});
                // pq.push({-d[adj_node], adj_node}); if using max heap
            }
        }
    }
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    
    cin >> nodes >> edges;

    for (int i = 0; i < edges; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;

        adj_list[u].push_back({v, w});
        adj_list[v].push_back({u, w});
    }

    int src = 1;
    dijkstra(src);

    if(visited[nodes] == 0){
        cout << -1 << "\n";
        return 0;
    }

    int selected_node = nodes;
    vector<int> path;

    while(1)
    {
        path.push_back(selected_node);
        if(selected_node == src)
            break;
        selected_node = parent[selected_node];
    }

    int strt = 0, endd = path.size() - 1;

    while (strt < endd)
    {
        // swap(path[strt], path[endd]);
        int temp = path[strt];
        path[strt] = path[endd];
        path[endd] = temp;
        strt++;
        endd--;
    }

    // reverse(path.begin(), path.end());

    for(auto node : path)
        cout << node << " ";


    // cout << d[nodes] << "\n";
    return 0;
}