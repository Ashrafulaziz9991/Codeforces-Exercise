#include <bits/stdc++.h>
using namespace std;

void solve(string s)
{
    string s2, s3;
    int avg = s.size() / 2;

    for (int i = 0; i < avg; i++)
        s2.push_back(s[i]);

    for (int i = avg; i < s.size(); i++)
        s3.push_back(s[i]);

    if (s2 == s3)
        cout << "Yes" << endl;
    else
        cout << "NO" << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;
        solve(str);
    }
    return 0;
}