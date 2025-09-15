#include <bits/stdc++.h>
using namespace std;
 /* 
     * count samll_nums
     * count big_nums
     * result =  count samll_nums * count big_nums
 */
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, mx, mn, mx_count = 0, mn_count = 0;
    cin >> n;

    vector<int> flowers_beauty(n);
    for (int i = 0; i < n; i++)
    {
        cin >> flowers_beauty[i];
        // long long b;
        // cin >> b;

        // mx = *max_element(flowers_beauty.begin(), flowers_beauty.end());
        // mn = *min_element(flowers_beauty.begin(), flowers_beauty.end());
        // mx_count = count(flowers_beauty.begin(), flowers_beauty.end(), mx);
        // mn_count = count(flowers_beauty.begin(), flowers_beauty.end(), mn);
    }
    // sort(flowers_beauty.begin(), flowers_beauty.end());

    mx = *max_element(flowers_beauty.begin(), flowers_beauty.end());
    mn = *min_element(flowers_beauty.begin(), flowers_beauty.end());
    mx_count = count(flowers_beauty.begin(), flowers_beauty.end(), mx);
    mn_count = count(flowers_beauty.begin(), flowers_beauty.end(), mn);
 
    int diff = mx - mn;
    if(mn == mx)
        cout<< (n * (n - 1)) / 2;
    else
        cout << diff <<" "<< mx_count*mn_count; 
    // long long x = 10000000000;
    // cout << x <<endl;
    return 0;
}

/*

*/