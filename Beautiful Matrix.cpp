#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int x, y, i, j;
    int mat[5][5];
    for (int i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            cin >> mat[i][j];
        }
    }

    // pair<int, int>coor;

   for (i = 0; i < 5; i++)
   {
       for (j = 0; j < 5; j++)
       {
           if (mat[i][j] == 1)
           {
               x = i;
               y = j;
           }
       }
   }

    // for (i = 0; i < 5; i++)
    // {
    //     for (j = 0; j < 5; j++)
    //     {
    //         if (mat[i][j] == 1)
    //         {
    //             coor(&i, &j);
    //         }
    //     }
    // }

    // x = coor.first;
    // y = coor.second;

    int x_pos, y_pos;

    if (x > 2)
        x_pos = x - 2;
    else
        x_pos = 2 - x;

    if (y > 2)
        y_pos = y - 2;
    else
        y_pos = 2 - y;

    cout << x_pos + y_pos;
    return 0;
}

