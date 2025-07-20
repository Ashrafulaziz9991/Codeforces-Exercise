#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    // int x, y, i, j;
    // int matrix[5][5] = {};

    // for ( i = 0; i < 5; i++)
    // {
    //     for ( j = 0; j < 5; j++)
    //     {
    //         cout<<matrix[i][j]<<" ";
    //     }
    //     cout<<"\n";
    // }

    // matrix[2][2] = 5;
    // cout<<"\n";

    // for (i = 0; i < 5; i++)
    // {
    //     for (j = 0; j < 5; j++)
    //     {
    //         cout<<matrix[i][j]<<" ";
    //     }
    //     cout<<"\n";
    // }

    string s;
    getline(cin, s);
    sort(s.begin(), s.end());
    cout<<s;
    return 0;
}