#define FAST_IO  ios_base::sync_with_stdio(0);cin.tie(0);
#include <bits/stdc++.h>
using namespace std;
int main()
{
    FAST_IO
    int t;cin>>t;
    int candie, ans;
    bool flag = 0;
    long long int a,b;
    while (t--)
    {

        long long int counter=0;
        cin>>candie;
        a=candie;
        if(candie == 0 || candie == 1 || candie == 2)
        {
            cout<<ans<<"\n";
            flag = 1;
        }
        else if(flag = 0)
        {
            while(a>b)
            {
                cout<<"A is "<<a<<" B is "<<b<<"\n";
                a--;
                b++;
                counter++;
            }
            cout<<"Total result "<<counter-1<<"\n";
        }
    }
    return  0;
}