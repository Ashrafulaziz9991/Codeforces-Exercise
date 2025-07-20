#include<iostream>
using namespace std;
int main()
{
    int n;cin>>n;
    double percent, sum=0;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }
    percent=(sum/n);
    cout<<percent<<"\n";
}
