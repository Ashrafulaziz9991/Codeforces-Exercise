// problem link : https://codeforces.com/problemset/problem/1512/A

/**
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];

        int index, terget;

        for (int i = 0; i < v.size(); i++)
        {
            int mn = count(v.begin(), v.end(), v[i]);
            if (mn == 1)
            {
                terget = v[i];
            }

            if (v[i] == terget)
            {
                index = i+1;
            }
        }
        cout << index << endl;
    }
    return 0;
}

*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
#include <climits>
#include <cstring>
#include <queue>
#include <stack>
#include <set>
#include <map>
#include <unordered_map>
#include <unordered_set>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    int spy;
    unordered_map<int, int> ump;
    for (int i : v) ump[i]++;
    for (int i = 0; i < v.size(); i++)
        if (ump[v[i]] == 1)
            spy = i + 1;

    cout << spy << endl;;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}