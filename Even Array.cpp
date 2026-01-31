// problem link : https://codeforces.com/problemset/problem/1367/B

#include <iostream>
#include <vector>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int>v(n);
    for(int i = 0; i < n; i++)
        cin >> v[i];
    
    int even_count = 0, odd_count = 0;
    int even_idx = 0, odd_idx = 0;

    for(int i = 0; i < n; i++)
    {
        if(v[i] % 2 == 0) even_count++;
        else odd_count++;

        if(i % 2 == 0) even_idx++;
        else odd_idx++;
    }

    if(even_count != even_idx || odd_count != odd_idx){
        cout << -1 << endl;
        return;
    }
    int mismatches = 0;
    for(int i = 0; i < n; i++)
    {
        if(i % 2 !=  v[i] % 2) mismatches++;
    }
    cout << mismatches / 2 << endl;
    return;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }
    return 0;
}