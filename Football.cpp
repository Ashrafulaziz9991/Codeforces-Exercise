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

    for (int i = 0; i < num.size(); i++)
    {
        if (num[i] == 1 && num[i] == num[i+1])
        {
            count++;
            lv = max(lv, count);
        }
        else if (num[i] == 0 && num[i] == num[i+1])
        {
            count2++;
            lv2 = max(lv2, count2);
        }
    }

    cout<<lv<<endl;
    cout<<lv2<<endl;

    return 0;
}