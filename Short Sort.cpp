#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string str, str2;
        cin >> str;
        str2 = str;
        sort(str.begin(), str.end());
        //cout << str;

        if (str == str2)
        {
            cout<<"YES"<<endl;
        }
        else if (str[0] == str2[0])
        {
            cout<<"YES"<<endl;
        }
        else if (str[1] == str2[1])
        {
            cout << "Yes" << endl;
        }
        else if (str[2] == str2[2])
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}