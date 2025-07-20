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