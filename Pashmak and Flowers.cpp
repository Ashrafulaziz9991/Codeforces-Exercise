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

    int n;
    cin >> n;

    vector<int> flowers_beauty(n);
    for (int i = 0; i < n; i++)
    {
        cin >> flowers_beauty[i];
    }
    // sort(flowers_beauty.begin(), flowers_beauty.end());

    int mx = *max_element(flowers_beauty.begin(), flowers_beauty.end());
    int mn = *min_element(flowers_beauty.begin(), flowers_beauty.end());
    int mx_count = count(flowers_beauty.begin(), flowers_beauty.end(), mx);
    int mn_count = count(flowers_beauty.begin(), flowers_beauty.end(), mn);
 
    int diff = mx - mn;
    if(mn == mx)
        cout<< (n * (n - 1)) / 2;
    else
        cout << diff <<" "<< mx_count*mn_count; 
    return 0;
}