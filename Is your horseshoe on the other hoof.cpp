#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    vector<int>v(4);
    for (int i = 0; i < 4; i++)
        cin>>v[i];
     
    set<int>st;
    for (auto &&i : v)
        st.insert(i);
    
    int sz_v = v.size(), sz_st = st.size();
    cout<<sz_v - sz_st;
    return 0;
}