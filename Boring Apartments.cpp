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
        string s;
        cin >> s;
        int x = s[0] - '0';
        int y = (x - 1) * 10;
        int sum2 = s.size() * (s.size() + 1) / 2;
        cout << y + sum2 << endl;
    }

    return 0;
}