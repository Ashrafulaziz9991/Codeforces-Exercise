#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string str, str2 = ".", str3 = "-.", str4 = "--", st5;
    cin>>str;

    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == '.')
        {
            st5.push_back('0');
        }
        else if (i < str.size() - 1 && str.substr(i, 2) == str3)
        {
            st5.push_back('1');
            i++;
        }
        else if (i < str.size() - 1 && str.substr(i, 2) == str4)
        {
            st5.push_back('2');
            i++;
        }
    }

    cout<<st5;
    
    return 0;
}