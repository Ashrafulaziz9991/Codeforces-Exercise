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
        string s;
        cin >> s;
        int a = s[0] - '0';
        int b = s[1] - '0';
        cout << a + b <<endl;
    }

    return 0;
}