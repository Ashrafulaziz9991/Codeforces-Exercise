#include <bits/stdc++.h>
using namespace std;

bool is_prime(int n)
{
    if(n < 2) return false;
    for(int i = 2; i< n; i++)
    {
        if(n % i == 0) return false;
    }
    return true;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, m, counter = 0;
    cin >> n >> m;

    for (int i = n; i <= m; i++)
    {
        if (!is_prime(i))
        {
            cout << " NO ";
            return 0;
        }
    }
    cout << "YES" <<endl;

    return 0;
}
