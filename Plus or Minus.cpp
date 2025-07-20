#include <bits/stdc++.h>
using namespace std;

void solve(int x, int y, int z)
{
    if (x + y == z)
        cout << "+" << endl;
    else if (x - y == z)
        cout << "-" << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        solve(a, b, c);
    }

    return 0;
}