/**
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
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;cin >> n;
    cin.ignore();
    string s;
    getline(cin, s);
    unordered_map<char, int>freq;
    for(char &c : s) freq[c]++;
    
    if(freq['A']>freq['D'])
        cout<<"Anton\n";
    else if(freq['A']<freq['D'])
        cout<<"Danik\n";
    else
        cout<<"Friendship\n";
    return 0;
}