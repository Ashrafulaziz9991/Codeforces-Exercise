// problem link: https://codeforces.com/problemset/problem/80/A

#include <bits/stdc++.h>
using namespace std;

vector<int> numbers = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47};
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int n, m;
    cin >> n >> m;
   
    for (int i = 0; i < numbers.size(); i++)
    {
        if (n == numbers[i] && m == numbers[i+1])
        {
            cout << "YES" <<endl;
            return 0;
        }
    }
    cout << "NO" <<endl;
}