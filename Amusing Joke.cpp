#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string str;
    cin >> str;
    string str2;
    cin >> str2;
    string str3;
    cin >> str3;
    string str4 = str + str2;
    // multiset<char> x, y;
    // for (auto &&i : str4)
    // {
    //     x.insert(i);
    // }

    // for (auto &&i : str3)
    // {
    //     y.insert(i);
    // }

    sort(str3.begin(), str3.end());
    sort(str4.begin(), str4.end());

    if(str3 == str4)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
