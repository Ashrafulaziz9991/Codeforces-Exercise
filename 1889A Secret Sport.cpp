#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i, n, ca=0, cb=0;
    cin>>n;
    string s;
    cin.ignore();
    getline(cin, s);
    for(i=0; i<s.size(); i++)
    {
        if(s[i]>='65'|| s[i]<='66')
        {
            if(s[i] == 'A')
            {
                ca++;
            }
            else if(s[i] == 'B')
            {
                cb++;
            }
        }
    }
    if(ca>cb)
    {
        cout<<"A";
        return 0;
    }
    else if(cb>ca)
    {
        cout<<"B";
        return 0;
    }
    //cout<<s;

    //cout<<"ca is "<<ca<<" and cb is "<<cb;

    return 0;
}
