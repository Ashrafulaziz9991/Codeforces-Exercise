#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, ct = 0;
    cin>>n;
    vector<int>vec(n);
    for (int i = 0; i < n; i++)
        cin>>vec[i];

    for (int i = 0; i < vec.size(); i++)
    {
        if(vec[i] != vec[i+1])
            ct++;
    }
    cout<<ct;
    return 0;
}