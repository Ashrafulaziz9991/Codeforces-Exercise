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
        getline(cin, str);

        str2.push_back(str[0]);
        str2.push_back(str[1]);

        for (int i = 3; i <= str.size(); i += 2)
        {
            str2.push_back(str[i]);
        }

        cout << str2 <<endl;
    }

    return 0;
}