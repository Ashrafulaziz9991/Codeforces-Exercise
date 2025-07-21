// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);

//     int n;
//     cin >> n;
//     set<int> s1, s2, s3;
//     vector<int> v(n), v2(n - 1);
//     for (int i = 0; i < n; i++)
//     {
//         cin >> v[i];
//         s1.insert(v[i]);
//     }
//     for (int i = 0; i < n - 1; i++)
//     {
//         cin >> v2[i];
//         s2.insert(v2[i]);
//     }
//     bool flag = false;





    

//     for (auto &&i : s1)
//     {
        
//         if (s2.find(i) == s2.end())
//         {
//             s1.insert(i);
//         }
//         cout<< i <<" ";
//     }
//     cout<<endl;
//     for (auto &&i : s2)
//     {
//         if (s1.find(i) == s1.end())
//         {
//             s2.insert(i);
//         }
//         cout<< i <<" ";
//     }
    

//     if (flag)
//     {
//         cout << "I become the guy." << endl;
//     }
//     else
//     {
//         cout << "Oh, my keyboard!" << endl;
//     }

//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin>>n;
    set<int> arr;

    int p;
    cin>>p;
    for (int i = 0; i < p; i++)
    {
        int x;cin>>x;
        arr.insert(x);
    }

    int q;
    cin>>q;
    for (int i = 0; i < q; i++)
    {
        int y;cin>>y;
        arr.insert(y);
    }

    if (arr.size() == n)
        cout<<"I become the guy."<<endl;
    else
        cout<<"Oh, my keyboard!"<<endl;
    
    return 0;
}

/*
4
3 1 2 3
2 2 3
*/

// #include <iostream>
// #include <set>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     set<int> levels;

//     int p;
//     cin >> p;
//     for (int i = 0; i < p; i++)
//     {
//         int x;
//         cin >> x;
//         levels.insert(x);
//     }

//     int q;
//     cin >> q;
//     for (int i = 0; i < q; i++)
//     {
//         int y;
//         cin >> y;
//         levels.insert(y);
//     }

//     if (levels.size() == n)
//     {
//         cout << "I become the guy." << endl;
//     }
//     else
//     {
//         cout << "Oh, my keyboard!" << endl;
//     }

//     return 0;
// }