// #include <iostream>
// using namespace std;
// int main()
// {
//     int t;cin>>t;
//     cin.ignore();
//     while (t--)
//     {
//         string s;
//         getline(cin, s);
//         if (s=="YES" || s== "yES" || s=="yes" || s=="Yes" || s== "YeS")
//             cout<<"Yes\n";
//         else
//             cout<<"No\n";
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
 
void check(string s)
{
    for (auto i : s) { 
        i = tolower(i); 
    }
    cout<<"No"<<endl;
}
 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin>>t;
    while (t--)
    {
        string r;
        cin>>r;
        check(r);
    }
    
 
    return 0;
}
 