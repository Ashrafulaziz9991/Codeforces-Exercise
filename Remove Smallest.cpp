// problem link : https://codeforces.com/problemset/problem/1399/A

#include <iostream>
#include <vector>
#include <algorithm>
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
        bool flag = true;
        sort(v.begin(), v.end());
        for (int i = 1; i < n; i++)
        {
            int x = abs(v[i] - v[i - 1]);
            if (x > 1)
            {
                flag = false;
                break;
            }
        }
        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}