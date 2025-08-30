/*
problem link https://codeforces.com/problemset/problem/492/B
*/

#include <bits/stdc++.h>
using namespace std;

#define ff first
#define ss second
#define pii pair<int,int>
#define vi vector<int>
#define mp make_pair
#define For(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define ull unsigned long long
#define pb push_back
#define ps push_front
#define pf push_front
#define mp make_pair
#define fast_in_out ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

int32_t main()
{
    fast_in_out;

    int l, d;
    cin >> l >> d;

    vector<int>road(l);

    for (int i = 0; i < l; i++)
    {
        cin >> road[i];
    }
    

    sort(road.begin(), road.end());

    int max_distance = 0;
    for (int i = 1; i < l; i++)
    {
        max_distance = max(max_distance, road[i] - road[i - 1]);
    }
    cout << max_distance << endl;
    
    return 0;
}
