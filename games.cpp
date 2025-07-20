#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, t, home, away, count = 0;
    cin>>t;
    while (t--)
    {
        cin>>home>>away;
        a = home;
        b = away;

        if (a == away && b == home)
        {
            count++;
        }
        // if (b == home)
        // {
        //     count++;
        // }
    }
    
    cout<<count;
    return 0;
}
