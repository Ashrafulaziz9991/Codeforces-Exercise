#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int N, M;
    cin>>N>>M;

    vector<int>arr(N), arr2;
    for (int i = 0; i < N; i++){
        cin>>arr[i];
    }

    int countr = 0;
    for (int i = 0; i < M; i++)
    {
        countr = count(arr.begin(), arr.end(),arr[i]);    
        arr2.push_back(countr);
    }
    for (auto &&i : arr2)
    {
        cout<< i << endl;
    }
    
    // for (int i = 0; i < M; i++)
    //     cout<<count(arr.begin(), arr.end(), arr[i])<<endl;
    return 0;
}