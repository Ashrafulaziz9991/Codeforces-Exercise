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
        string str2, str;
        cin >> str;
        str2 = "codeforces";
        int x = 0;

        for (int i = 0; i < str.size(); i++)
        {
            if (str[i] != str2[i])
                x++;
        }
        cout << x << endl;
    }
    return 0;
}