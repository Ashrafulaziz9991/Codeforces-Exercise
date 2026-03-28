// problem link : https://codeforces.com/problemset/problem/1873/B

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
#include <climits>
#include <cstring>
#include <queue>
#include <stack>
#include <set>
#include <map>
#include <unordered_map>
#include <unordered_set>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
        cin >> nums[i];
    int mn = *min_element(nums.begin(), nums.end());

    for (int &i : nums)
    {
        if (mn == i)
        {
            i = i + 1;
            break;
        }
    }
    int product = 1;

    for (int i : nums)
        product *= i;

    cout << product << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
        solve();
        
    return 0;
}