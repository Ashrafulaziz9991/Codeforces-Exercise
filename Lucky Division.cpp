// #include <bits/stdc++.h>
// using namespace std;

// set<int> Lucky;
// bool is_lucky(int &num)
// {
//     while (num > 0)
//     {
//         int temp = num % 10;
//         Lucky.insert(temp);
//         num = num / 10;
//     }
//     for (auto &&i : Lucky)
//     {
//         if (Lucky.size() == 2 && i == 4 && i == 7)
//             return true;
//         else if (Lucky.size() == 1 && i == 4 || i == 7)
//             return true;
//     }
    
//     return false;
// }

// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);

//     int n;
//     cin >> n;

//     if (n % 4 == 0 || n % 7 == 0)
//         printf("Yes\n");
//     else if (is_lucky(n))
//         printf("YES");
//     else
//         printf("NO");

//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    vector<int>lst = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777};

    int n, count = 0;
    cin>>n;

    for (int i = 0; i < lst.size(); i++)
    {
        if (n % lst[i] == 0)
            count++;
    }
    count > 0 ? cout<< "YES" : cout<<"NO"<<endl;
    return 0;
}