#define FAST_IO  ios_base::sync_with_stdio(0);cin.tie(0);
#include <bits/stdc++.h>
using namespace std;
int main()
{
    FAST_IO
    int n,cnt=0;
    cin>>n;
    vector<int>v(n);
    for (int i = 0; i < n; ++i) {
        cin>>v[i];
    }

    int x = 0;
    int d = v[x];

    Loop:
    for (int i = 0; i < n; ++i) {
        if (d != v[i+1])
        {
            d = i;
            break;
        }
        else
            goto step_2;
    }

    step_2:
    while (v.size() > 0)
    {
        x++;
        goto Loop;
    }
    



    cout<<d;
    return  0;
}
/*
 * int d = v[0];
    for (int i = 1; i < n; ++i) {
        if (d != v[i]) {
            d = i;
            break;  // Exit the loop once a different element is found
        }
    }

 *
 */
