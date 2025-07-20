#include <bits/stdc++.h>
using namespace std;

void check(string &s)
{
    string s5;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != s[i + 1])
        {
            s5.push_back(s[i]);
        }
    }

    set<char> st5;
    for (auto &&i : s5)
    {
        st5.insert(i);
    }

    st5.size() == s5.size() ? cout << "Yes\n" : cout << "NO\n";
    return;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cin.ignore();
        string s;
        cin >> s;
        check(s);
    }
}

// // v = {3,3,5,9,9,5,7,8,8,7,4}

// #include <iostream>
// #include <vector>
// #include <map>
// using namespace std;

// int main() {
//     vector<int> v = {3, 3, 5, 9, 9, 5, 7, 8, 8, 7, 4};
//     map<int, int> freq;

//     // Count frequencies
//     for (int x : v) freq[x]++;

//     // Find minimum frequency
//     int minFreq;
//     for (auto& p : freq)
//         minFreq = min(minFreq, p.second);

//     // Print numbers with that frequency
//     cout << "Lowest frequency (" << minFreq << " time(s)) found in:\n";
//     for (auto& p : freq)
//         if (p.second == minFreq)
//             cout << p.first << " ";

//     cout << endl;
//     return 0;
// }
