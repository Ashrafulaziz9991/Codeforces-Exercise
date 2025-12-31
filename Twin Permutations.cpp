// problem link : https://codeforces.com/problemset/problem/1831/A

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int>a(n);
        for(int i = 0; i < n; i++) cin >> a[i];

        for (int i = 0; i < a.size(); i++)
        {
            a[i] = (n + 1) - a[i];
        }

        for(auto i : a) cout << i << " ";
        cout << endl; 
        
    }
    
    return 0;
}