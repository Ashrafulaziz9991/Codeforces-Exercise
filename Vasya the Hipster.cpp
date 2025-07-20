#include <bits/stdc++.h>
#define nl "\n"
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int a, b;
    cin>>a>>b;
    if(a == b)
        cout<<a<<" 0"<<nl;
    else if (a > b)
    {
        int diff = a - b;
        if (diff == 1)
            cout<<b<<" 0\n";
        else
            cout<<b<<" "<<diff/2<<nl;
    }
    else if (b>a)
    {
        int d = b-a;
        if(d == 1)
            cout<<a<<" 0\n";
        else
            cout<<a<<" "<<d/2;
    }   
    return 0;
}