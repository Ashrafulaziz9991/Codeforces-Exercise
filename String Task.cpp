#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string str, str2;
    cin >> str;

    for (auto &&i : str)
    {
        if (i >='A' && i<='Z')
            i+=32;
        
        if (i == 'a' || i == 'e' || i == 'i' || i == 'o' || i == 'u' || i == 'y')
            continue;
        else{
            str2 += '.';
            str2 += i;
        }
    }
    cout << str2 << endl;
    return 0;
}