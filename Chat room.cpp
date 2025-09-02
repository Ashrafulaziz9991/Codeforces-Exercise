// problem link : https://codeforces.com/problemset/problem/58/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string s;
    cin >> s;

    // O(n^5)

    // {
    //     if (s[i] == 'h')
    //     {
    //         for (int j = i + 1; j < s.size(); j++)
    //         {
    //             if (s[j] == 'e')
    //             {
    //                 for (int k = j + 1; k < s.size(); k++)
    //                 {
    //                     if (s[k] == 'l')
    //                     {
    //                         for (int l = k + 1; l < s.size(); l++)
    //                         {
    //                             if (s[l] == 'l')
    //                             {
    //                                 for (int m = l + 1; m < s.size(); m++)
    //                                 {
    //                                     if (s[m] == 'o')
    //                                     {
    //                                         cout << "YES";
    //                                         return 0;
    //                                     }
    //                                 }
    //                             }
    //                         }
    //                     }
    //                 }
    //             }
    //         }
    //     }
    // }
    string str = "hello";
    
    int idx = 0;

    for (auto i : s)
    {
        if(i == str[idx])
            idx++;
        if(idx == str.size())
            break;
    }
    
    if(idx == str.size())
        cout << "YES";
    else
        cout << "NO";
    return 0;
}

