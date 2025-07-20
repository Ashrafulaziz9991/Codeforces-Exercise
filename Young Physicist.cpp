/**
 * completed
 * 
 */


#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, sum = 0, sum2 = 0, sum3 = 0;
    cin >> n;
    vector<int> X;
    vector<int> Y;
    vector<int> Z;
    while (n--)
    {
        int x, y, z;
        cin >> x >> y >> z;
        X.push_back(x);
        Y.push_back(y);
        Z.push_back(z);
    }

    for (auto &&i : X){
        // cout<< i << " ";
        sum += i;
    }

    for (auto &&i : Y)
        sum2 += i;
    
    for (auto &&i : Z)
        sum3 += i;
    

    cout<< sum;
    cout<< endl;

    if(sum == 0 && sum2 == 0 && sum3 == 0)
        cout << "YES" << endl;
    else
         cout << "NO" << endl;
    
    return 0;
}