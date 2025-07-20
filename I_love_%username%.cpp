#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;cin>>n;
    vector<int>v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }

    int maxscore = v[0];
    int minscore = v[0];
    
    int amzing = 0;

    for (int i = 1; i < n; i++)
    {
        if(maxscore > v[i]){
            amzing++;
            maxscore = v[i];
        }
        
        else if(minscore < v[i]){
            amzing++;
            minscore = v[i];
        }
    }

    cout<<amzing;   
}