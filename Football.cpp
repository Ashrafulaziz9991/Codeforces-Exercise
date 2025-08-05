#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    string num;
    cin>>num;

    int lv = 0;
    int count = 0;

    int lv2 = 0;
    int count2 = 0;
    for (auto &&i : num)
    {
        if (i == '1')
            count2++;
        else
            count2 = 0;
        count = max(count2, count);
    }

    for (auto &&i : num)
    {
        if (i == '0')
            lv2++;
        else
            lv2 = 0;
        lv = max(lv2, lv);
    }

    // cout << count <<endl;
    // cout << lv;

    if(count >=7 || lv >=7)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}