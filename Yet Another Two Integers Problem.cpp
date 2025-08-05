#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int a, b, count = 0;
    cin >> a >> b;

    if (a > b)
    {
        while (a != b)
        {
            a -= 10;
            count++;
        }
    }
    else
    {
        while (b != a)
        {
            b -= 10;
            count++;
        }
    }
    

    cout << count;
    return 0;
}