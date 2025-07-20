#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, ca=0, cd=0;cin>>n;
    cin.ignore();
    string s;getline(cin, s);
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='A')
            ca++;
        else if(s[i]=='D')
            cd++;
    }
    if(ca>cd)
        cout<<"Anton\n";
    else if(cd>ca)
        cout<<"Danik\n";
    else if(ca=cd)
        cout<<"Friendship\n";
}
