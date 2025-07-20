#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    // vector<int>v = {0, 1, 2, 3, 4};

    int diff, sum = 0, mx;
    mx = *max_element(v.begin(), v.end());

    for (int i = 0; i < v.size(); i++)
    {
        diff = mx - v[i];
        sum += diff;
        // i++;
    }

    cout << sum << endl;

    return 0;
}