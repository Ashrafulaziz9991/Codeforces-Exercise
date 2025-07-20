#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        char a, b, c, d, e, f;
        cin >> a >> b >> c >> d >> e >> f;

        if (int(a) + int(b) + int(c) == int(d) + int(e) + int(f))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         string s;
//         cin >> s;
//         int a = s[0] - '0';
//         int b = s[1] - '0';
//         int c = s[2] - '0';
//         int d = s[3] - '0';
//         int e = s[4] - '0';
//         int f = s[5] - '0';

//         int sum = a + b + c;
//         int sum2 = d + e + f;

//         if (sum == sum2)
//         {
//             cout << "YES" << endl;
//         }
//         else
//         {
//             cout << "NO" << endl;
//         }
//     }
//     return 0;
// }

/*
void solve(string str)
{
    int s, s1 = 0, s2 = 0, tmp;
    vector<int> v, v2, v3;
    s = stoi(str);

    while (s > 0)
    {
        int tmp = s % 10;
        v.push_back(tmp);
        s /= 10;
    }

    for (int i = 0; i < 3; i++)
        v2.push_back(v[i]);

    for (int i = 3; i < 6; i++)
        v3.push_back(v[i]);

    for (auto &&i : v2)
        s1 += i;
    for (auto &&i : v3)
        s2 += i;

    if (s1 == s2)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

/*
void solve(int n)
{
    int sum = 0, sum2 = 0, temp;
    vector<int>v;
    if(n == 0)
    {
        cout<<"NO"<<endl;
        return;
    }
    while (n>0)
    {
        temp = n%10;
        v.push_back(temp);
        n/=10;
    }
    for (int i = 0; i < 3; i++)
    {
        sum+=v[i];
    }
    for (int i = 3; i < 6; i++)
    {
        sum2+=v[i];
    }
    if (sum != sum2)
        cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;
}
*/