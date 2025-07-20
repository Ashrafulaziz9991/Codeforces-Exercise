// int fibo(int n)
// {
//     // if (n == 0)
//     //     return 0;
//     // else if(n == 1)
//     //     return 1;
//     // return fibo(n - 1) + fibo(n-2);

//     return (n == 0) ? 0 : n == 1 ? 1 : fibo(n - 1) + fibo(n - 2);
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>v(4);
    for(int i = 0; i<4; i++){
        cin>>v[i];
    }
    sort(v.begin(), v.end());
    for(int i = 0; i<3; i++)
        cout<<v[3]-v[i]<<" ";
}
