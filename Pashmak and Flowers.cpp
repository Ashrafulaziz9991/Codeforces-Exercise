#include <bits/stdc++.h>
using namespace std;
/*
int factorial(int num)
{
    if (num == 0 || num == 1)
        return 1;
    else
        return num * factorial(num - 1);
}


int combination(int num)
{
    int comb = factorial(num) / factorial(2) * factorial(num - 2);
    return comb;
}
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
    sort(flowers_beauty.begin(), flowers_beauty.end());

    int mx = *max_element(flowers_beauty.begin(), flowers_beauty.end());
    int mn = *min_element(flowers_beauty.begin(), flowers_beauty.end());
    int mx_count = count(flowers_beauty.begin(), flowers_beauty.end(), mx);
    int mn_count = count(flowers_beauty.begin(), flowers_beauty.end(), mx);

    int diff = mx - mn;


    cout << diff <<" "<< mx_count*mn_count; 
    /* 
     * count samll_nums
     * count big_nums
     * result =  count samll_nums * count big_nums
     */

    return 0;
}