#include <bits/stdc++.h>
#define nl "\n"
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

        int d = 0;
        int Max = 0;

        for (int i = 0; i < v.size(); i++)
        {
            if (v[i] == 0)
            {
                d++;
                Max = max(d, Max);
            }
            else if (v[i] == 1)
                d = 0;
        }
        cout << Max<<nl;
    }

    return 0;
}