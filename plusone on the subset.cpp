#include <bits/stdc++.h>
using namespace std;

void solve(vector<int> &v)
{
    int max = *max_element(v.begin(), v.end());
    int min = *min_element(v.begin(), v.end());
    cout << max - min << endl;
}

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

        solve(v);
    }
    return 0;
}