#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a, b;
        cin>>a>>b;
        int counter = (a%b==0)?0:b-(a%b);
        cout<<counter<<"\n";
    }
    return 0;
}

/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin>>a>>b;
//    int a, b;
//    scanf("%d%d", &a, &b);
    int maxi = max(a,b);
    //max = (a > b) ? a : b; //using ternary
    printf("The maximum of %d and %d is %d\n", a, b, maxi);

//    cout<<"A value "<<a<<endl;
//    cout<<"B value "<<b<<endl;
    return 0;
}
*/
/*void divisible()
{
    int a, b, counter = 0;
    cin>>a>>b;
    while(a%b!=0)
    {
        a+=1;
        counter++;
    }
    cout<<counter<<"\n";
}*/
