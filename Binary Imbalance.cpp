#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,cz=0,co=0;cin>>n;
    cin.ignore();
    string s;
    getline(cin, s);
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='0')
        {
            cz++;
        }
        else if(s[i]=='1')
        {
            co++;
        }
    }
    if(co==n)
        cout<<"No"<<endl;
    else
        cout<<"Yes"<<endl;
    return;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
