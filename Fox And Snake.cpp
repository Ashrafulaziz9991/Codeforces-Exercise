#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int r, c;
    cin >> r >> c;
    //char mat[r][c];

    for (int i = 1; i <= r; i++)
    {
        if (i % 2 != 0)
        {
            // Full row of #
            for (int j = 0; j < c; j++)
                cout << '#';
        }
        else
        {
            if (i % 2 == 0 && i % 4 != 0)
            {
                for (int j = 0; j < c - 1; j++)
                    cout << '.';
                cout << '#';
            }
            else
            {
                cout << '#';
                for (int j = 1; j < c; j++)
                    cout << '.';
            }
            //right = !right;
        }
        cout << '\n';
    }
    return 0;
}

// for (int i = 1; i <= r; i++)
// {
//     //O(n^2) but we need O(n)
//     for (int j = 1; j <= c; j++)
//     {
//         if (i%2 == 0)
//             mat[i][j] = '.';
//         if (i%2 == 0 && j==c && i%4 != 0 )
//             mat[i][j] = '#';
//         if (i%4 == 0 && j==1)
//             mat[i][j] = '#';
//         if(i%2 != 0)
//             mat[i][j] = '#';
//     }
//     bool right = true;}
/*
    for (int i = 1; i <= r; i++)
    {
        if (i % 2 != 0)
        {
            // Full row of #
            for (int j = 0; j < c; j++)
                cout << '#';
        }
        else
        {
            if (right)
            {
                for (int j = 0; j < c - 1; j++)
                    cout << '.';
                cout << '#';
            }
            else
            {
                cout << '#';
                for (int j = 1; j < c; j++)
                    cout << '.';
            }
            right = !right;
        }
        cout << '\n';
    }
*/
  // for (int i = 1; i <= r; i++)
    // {
    //     for (int j = 1; j <= c; j++)
    //     {
    //         cout << mat[i][j];
    //     }
    //     cout << "\n";
    // }

 /*
        for (int i = 1; i <= r; i++)
        {
            // O(n^2) but we need O(n)
            if (i % 2 == 0)
            {
                for (int j = 1; j <= c; j++)
                    mat[i][j] = '.';
            }

            if (i % 2 == 0 && i % 4 != 0)
            {
                for (int j = 1; j <= c; j++)
                {
                    if (j == c)
                        mat[i][j] = '#';
                }
            }

            if (i % 4 == 0)
            {
                for (int j = 1; j <= c; j++)
                {
                    if (j == 1)
                        mat[i][j] = '#';
                }
                //}
            }

            if (i % 2 != 0)
            {
                for (int j = 1; j <= c; j++)
                {
                    mat[i][j] = '#';
                }
            }
        }
        */


   // for (int i = 1; i <= r; i++)
    // {
    //     if (i % 2 != 0) // Odd rows → all '#'
    //     {
    //         for (int j = 1; j <= c; j++)
    //             mat[i][j] = '#';
    //     }
    //     else if (i % 4 == 0) // Every 4th even row → '#' at first column
    //     {
    //         mat[i][1] = '#';
    //         for (int j = 2; j <= c; j++)
    //             mat[i][j] = '.';
    //     }
    //     else // i % 4 == 2 → '#' at last column
    //     {
    //         for (int j = 1; j < c; j++)
    //             mat[i][j] = '.';
    //         mat[i][c] = '#';
    //     }
    // }
