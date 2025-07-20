#define FAST_IO  ios_base::sync_with_stdio(0);cin.tie(0);
#include <bits/stdc++.h>
using namespace std;
int main()
{
    FAST_IO
    int t;cin>>t;
    while (t--)
    {
        int n;cin>>n;
        cin.ignore();
        string s;
        getline(cin, s);
        cout << (s[s.size() - 1] == 'A' ? "A\n" : (s[s.size() - 1] == 'B' ? "B\n" : "?\n"));
    }
    return 0;
}