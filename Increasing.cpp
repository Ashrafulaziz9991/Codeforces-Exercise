// problem link : https://codeforces.com/problemset/problem/1742/B

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

void solve(){
    int n;
    cin >> n;
    vector<int>arr(n);
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    

    if(n == 1)
        cout << "YES" << endl;
    else
    {
        unordered_map<int, int> freq;
        bool flag = true;
        for (int i : arr)
            freq[i]++;

        for (auto [k, freq] : freq)
        {
            if (freq == n && n != 1 || freq > 1){
                flag = false;
                break;
            }
        }
        if(flag) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--)
        solve();

    return 0;
}