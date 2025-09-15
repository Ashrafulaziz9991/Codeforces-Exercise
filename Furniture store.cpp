/**
 * problem link https://codeforces.com/contest/2141/problem/A
 * 
 * Though this problem should be solved through the Kotlin language, but we'll try it through the c++
 */


#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin >> n;

    

    vector<int>models(n);
    for (int i = 0; i < n; i++)
    {
        cin >> models[i];
    }



    for (auto &&i : models)
    {
        cout << i <<" ";
    }
    
    

    return 0;
}