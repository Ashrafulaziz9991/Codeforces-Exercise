#include <bits/stdc++.h>
using namespace std;

/**
 * not completed
 */
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int k, l, m, n, d;
    cin>>k>>l>>m>>n>>d;

    int count = 0;

    for (int i = 1; i <=d ; i++)
    {
        if (i % k == 0)
            count+=k;
        if( i % l == 0)
            count+=l;
        if( i % m == 0)
            count+=m;
        if( i % n == 0)
            count+=n;
    }

    cout<< count;
    return 0;
}