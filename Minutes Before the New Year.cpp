// Created by tamzid on 12/26/23.

/*#include <bits/stdc++.h>
using namespace std;
int main()
{
    cout<<"Hour : ";
    int hour;cin>>hour;
    //int mint=5;
    cout<<hour*60<<" Minutes";
    return  0;
}
*/
#include <bits/stdc++.h>
int main()
{
    int t;std::cin>>t;
    while (t--)
    {
        int hour, minutes;std::cin>>hour>>minutes;
        std::cout<<1440 - ((hour*60)+minutes)<<"\n";
    }
    return  0;
}