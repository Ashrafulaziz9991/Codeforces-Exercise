// problem link : https://codeforces.com/problemset/problem/580/A

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

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    vector<int>progress(n);
    for (int i = 0; i < n; i++)
        cin >> progress[i];
    
    if(progress.size() == 1) {
        cout << progress[0];
        return 0;
    }


    /**
     * basically this process cheking longest progress subsequence
     * for instance :
     *  arr size : 6
     *  2 2   1 3 4  1
     *  size   2      3
     *  ans will be 3
     */

    int mx = 1;
    int cnt = 1;
    for (int i = 0; i + 1 < n; i++) {
        if (progress[i] <= progress[i + 1]) {
            cnt++;
        } else {
            cnt = 1;
        }
        mx = max(mx, cnt);
    }

    cout << mx;
    return 0;
}