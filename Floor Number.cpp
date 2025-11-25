#include <bits/stdc++.h>
using namespace std;

int floornumber(int floor, int appertment)
{
    double X = appertment;

    if (floor == 2 || floor == 1)
        return 1;
    else
        return  1 + ceil((floor - 2) / X);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        cout << floornumber(n, x)<<endl;
    }

    return 0;
}