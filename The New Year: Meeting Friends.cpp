#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    vector<int>v(3);
    for (int i = 0; i < 3; i++)
        cin>>v[i];
    sort(v.begin(), v.end());
    int a = v[1]-v[0], b = v[2]-v[1];
    cout<<a+b;
    return 0;
}