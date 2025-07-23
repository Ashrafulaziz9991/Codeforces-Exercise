#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        cin.ignore();

        string str;
        getline(cin, str);
        bool flag = 0;
        int start = 0, endd = str.size(), real_sz, count = 0;
        real_sz = str.size();
        for (int i = 0; i < str.size(); i++)
        {
            if (str[start] == str[endd - 1])
            {
                cout << real_sz << endl;
                flag = 1;
                break;
            }

            else if (str[start] != str[endd - 1])
                real_sz -= 2;

            start++, endd--;
        }
        if(!flag)
            cout << count  << endl;
    }
    return 0;
}