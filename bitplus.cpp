#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, x = 0;
    string str;
    cin>>t;
    while (t--)
    {
        cin>>str;
        str[1]=='+'? x++ : x--;
    }
    cout<<x;
}