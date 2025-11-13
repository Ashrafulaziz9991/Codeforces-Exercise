// problem linl : https://codeforces.com/problemset/problem/1878/A

#include <bits/stdc++.h>
using namespace std;
bool exist(vector<int> &x, int &terget)
{
    for (int &i : x)
    {
        if (i == terget)
            return true;
    }
    return false;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin >> T;

    while (T--)
    {
        int sz, t;
        cin >> sz >> t;

        vector<int> a(sz);
        for (int i = 0; i < sz; i++)
            cin >> a[i];

        if (exist(a, t))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}