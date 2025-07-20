#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a, b, c, d, counter = 0;;
    cin>>a>>b>>c>>d;

    if (b>a)
        counter += 1;
    if(c>a)
        counter += 1;
    if(d>a)
        counter += 1;

    cout<<counter<<endl;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;cin>>t;
    while (t--)
    {
        solve();
    }
    return 0;
}
