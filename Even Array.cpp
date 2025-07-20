#include<bits/stdc++.h>
//we've to learn first greedy algorothm to solve this task
//it's will be hanging on until we didn't learn that algorithm
using namespace std;

int main()
{
    int n, flag=0;cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]==i)
        {
            flag=1;
            break;
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<"\n";
    }
    return 0;

}
