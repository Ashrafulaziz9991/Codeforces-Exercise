#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int num, count_A = 0, count_B = 0;
    cin>>num;
    string sets;
    cin.ignore();
    getline(cin, sets);
    for(int i=0;i<sets.size();i++)
    {
        if(sets[i]==65 || sets[i]==66)
        {
            if(sets[i]==65)
            {
                count_A++;
            }
            else if(sets[i]==66)
            {
                count_B++;
            }
        }
    }
    if(count_A>count_B)
        cout<<"A\n";
    else
        cout<<"B\n";
    return;
}

int main()
{
    cout<<"Enter the test cases :";
    int t;cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
