/*
problem link https://codeforces.com/contest/2140/problem/B
*/

#include <bits/stdc++.h>
using namespace std;

const int limit = 1e9;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--)
    {
        int x;
        cin >> x;

        // string sum = to_string(x) + to_string(y);

        for (int i = 1; i <= limit; i++)
        {
            string catenation = to_string(x) + to_string(i);

            long long result = stoll(catenation);

            if (result % (x + i) == 0)
            {
                cout << i << endl;
                break;
            }
        }
    }

    return 0;
}