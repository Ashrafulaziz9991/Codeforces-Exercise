#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string str;
    getline(cin, str);
    set<char>chr;
    for (auto &&i : str)
    {
        if (i != ',' && i != '{' && i != '}' && i != ' ')
        {
           chr.insert(i);
        }
    }
    cout<<chr.size()<<endl;
    return 0;
}