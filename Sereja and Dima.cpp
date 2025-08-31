/*
problem link : https://codeforces.com/problemset/problem/381/A
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    int l = 0, r = n - 1, sereja = 0, dima = 0;

    bool turn = true;

    while (l <= r)
    {
        int pick;
        if (v[l] > v[r])
            pick = v[l++];
        else
            pick = v[r--];

        if (turn)
        {
            sereja += pick;
        }
        else
        {
            dima += pick;
        }

        turn = !turn; // toggole turn
    }

    cout << sereja << " " << dima;
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     int n;
//     cin>>n;
//     vector<int>v(n), v2, v3;
//     for (int i = 0; i < n; i++)
//     {
//         cin>>v[i];
//     }

//     bool sereja = true;
//     //bool dima = false;

//     //cout<<mx<<endl;
//     int mx, sum = 0, sum2 = 0;
//     while (!v.empty())
//     {
//         //step_1:
//         mx = *max_element(v.begin(), v.end());
        
//         if (sereja)
//         {
//             v3.push_back(mx);
//             //v.erase(remove(v.begin(), v.end(), mx), v.end());
//             // sereja = false;
//             // dima = true;
//             //goto step_1;
//         }
//         else
//         {
//             v2.push_back(mx);
            
//             // dima = false;
//             // sereja = true;
//             //goto step_1;
//         }
//         v.erase(remove(v.begin(), v.end(), mx), v.end());
//         sereja = !sereja; //toggle turn
//     }
    
//     for (auto &&i : v2)
//     {
//         cout<< i <<" ";
//         sum2 += i;
//     }

//     cout<<endl;

//     for (auto &&i : v3)
//     {
//         cout<< i <<" ";
//         sum += i;
//     }

//     cout<<endl;
//     cout<<sum<<" "<<sum2;
//     return 0;
// }

// for (int i = 1; i <=n; i++)
    // {
    //     v3.push_back(mx);
    //     v.erase(remove(v.begin(), v.end(), mx), v.end());
    // }
    
    // for (int i = 1; i <=n; i++)
    // {
    //     v2.push_back(mx);
    //     v.erase(remove(v.begin(), v.end(), mx), v.end());
    // }
    

    // mx = *max_element(v.begin(), v.end());
    // cout<<mx<<endl;

    // v.erase(remove(v.begin(), v.end(), mx), v.end());

    // mx = *max_element(v.begin(), v.end());
    // cout<<mx<<endl;

    // v.erase(remove(v.begin(), v.end(), mx), v.end());
    
    // mx = *max_element(v.begin(), v.end());
    // cout<<mx<<endl;

    // v.erase(remove(v.begin(), v.end(), mx), v.end());

    // mx = *max_element(v.begin(), v.end());
    // cout<<mx<<endl;
