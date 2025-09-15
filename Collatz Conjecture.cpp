/*
input 

1 4
1 5
5 4


output

1


*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int k, x;
    cin >> k >> x;

    int div;
    while (true)
    {
        if (k % 2 == 0)
        {
            div = k / 2;
            break;
        }
        else
            k = k * x + 1;
    }

    cout << div;2023
    0

    return 0;
}