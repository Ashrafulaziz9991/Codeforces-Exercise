#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, count = 0, crime = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x > 0)
            count = count + x;
        else if (x < 0)
        {
            if (count > 0)
            {
                count--;
            }
            else
                crime++;
        }
    }
    cout << crime;
    return 0;
}