#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string a, b, c;
    cin>>a;
    cin>>b;

    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] != b[i])
        {
            c.push_back('1');
        }
        else
        {
            c.push_back('0');
        }
    }
    cout<<c<<endl;
    return 0;
}