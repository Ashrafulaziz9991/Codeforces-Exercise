#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin>>n;
    cin.ignore();
    string str;
    cin>>str;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (str[i] == str[i+1])
        {
            count++;
        }
    }
    cout<<count;
    return 0;
}