// #include <bits/stdc++.h>
// using namespace std;

// void solve()
// {
//     int a, b, c;
//     cin>>a>>b>>c;

//     if (a + b == c)
//         cout<<"Yes\n";
//     else if(b + c == a)
//         cout<<"Yes\n";
//     else if (c + a == b)
//         cout<<"Yes\n";
//     else
//         cout<<"NO\n";
// }

// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     int t;cin>>t;
//     while (t--)
//     {
//         solve();
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a, b, c;
    cin>>a>>b>>c;

    if (a + b == c || b + c == a || c + a == b)
        cout<<"Yes\n";
    else
        cout<<"NO\n";
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