/*Leetcode problem*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    // int n;
    // cin>>n;
    // vector<int>v(n)
    // for (int i = 0; i < n; i++)
    // {
    //     cin>>v[i];
    // }

    vector<int> v = {4, 2, 8, 9, 6, 7, 3};
    int terget = 5, x, y;
    
    // for (int i = 0; i < v.size(); i++)
    // {
    //     if (v[t]+v[i] == terget)
    //     {
    //         // cout<< i <<endl;
    //         // cout<<t<<endl;
    //         x = x*i;
    //         y = y*t;

    //         //break;
    //     }
    //     else{
    //         t++;
    //     }
    // }

    int start = 0, endd = v.size()-1;
    int k = 0;

    while (start<endd)
    {
        if (v[start] + v[start+k] == terget)
        {
            x = start;
            y = k;
            break;
        }
        else{
            k++;
        }
        start++;
    }

    // for (int i = 0; i < v.size(); i++)
    // {
    //     //cout<<i<<" th sum :"<<
    //     if (v[i] + v[i + t] != terget)
    //     {
    //         // x = i;
    //         // y = t;
    //         x = i;
    //         t++;
    //         break;
            
    //     }
    //     else
    //     {
    //         i++;
    //     }
        
    // }

    //int j = 5, h = 1e9;

    //cout<<h+j;

    cout<<x<<" "<<y;

    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);

//     long double n, m, a;
//     cin>>n>>m>>a;
//     long long int x = (ceil(n/a)) *(ceil(m/a));
//     cout<<x;
//     return 0;
// }