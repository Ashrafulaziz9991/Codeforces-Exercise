#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int k, r;
    cin>>k>>r;

    for (int i = 1; i <= 10; i++)
    {
        if ((i*k) % 10 == 0 || (i*k) % 10 == r)
        {
            cout<<i;
            break;
        }
        
    }
    
    return 0;
}