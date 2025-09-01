// problem link : https://codeforces.com/problemset/problem/58/A
/*
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    // cin.tie(0);
    // int n, m;
    // cin >> n >> m;
    string s;
    cin >> s;
    // cin.ignore();
    // getline(cin, s);

    // if(s == "hello" || s == "ahhellllloou")
    //     cout << "YES";
    // else
    //     cout<<"NO";


    // cout << s;

    // O(n^5)

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'h')
        {
            for (int j = i + 1; j < s.size(); j++)
            {
                if (s[j] == 'e')
                {
                    for (int k = j + 1; k < s.size(); k++)
                    {
                        if (s[k] == 'l')
                        {
                            for (int l = k + 1; l < s.size(); l++)
                            {
                                if (s[l] == 'l')
                                {
                                    for (int m = l + 1; m < s.size(); m++)
                                    {
                                        if (s[m] == 'o')
                                        {
                                            cout << "YES";
                                            return 0;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    cout<<"NO";
    return 0;
}

*/
