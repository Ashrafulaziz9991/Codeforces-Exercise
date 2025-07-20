// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);

//     string s = "Timur";
//     string s2 = "miurT";
//     string s3 = "Trumi";
//     string s4 = "mriTu";

//     int t;
//     cin >> t;

//     //cin.ignore();

//     while (t--)
//     {
//         int n;cin>>n;
//         cin.ignore();
//         string str;
//         getline(cin, str);
//         // cout<<str;
//         if (str == s)
//         {
//             cout << "YES"<<endl;
//         }
//         else if (str == s2)
//         {
//            cout << "YES" <<endl;
//         }
//         else if (str == s3)
//         {
//            cout << "YES" <<endl;
//         }
//         else if (str == s4)
//         {
//            cout << "YES" <<endl;
//         }
//         else
//         {
//             cout << "NO" <<endl;
//         }
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int exists(string &S, int n)
{
    if (n != 5)
        return 0;
    sort(S.begin(), S.end());
    if (S != "Timru")
        return 0;
    else
        return 1;
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
        getline(cin, s);
        // exists(s) == 1? cout<<"yes\n" : cout<<"NO";
        if (exists(s, n) == 1)
        {
            cout << "Yes\n";
        }
        else
        {
            cout << "No\n";
        }
    }

    return 0;
}

// #include <iostream>
// #include <string>
// using namespace std;

// bool containsVowel(const string& s) {
//     for (char ch : s) {
//         // Convert to lowercase to handle uppercase letters
//         //ch = tolower(ch);

//         // Check if character is a vowel
//         if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
//             return true;  // Return true if any vowel is found
//         }
//     }
//     return false;  // Return false if no vowels are found
// }

// int main() {
//     string s;
//     cout << "Enter a string: ";
//     cin >> s;

//     if (containsVowel(s)) {
//         cout << "Yes" << endl;
//     } else {
//         cout << "No" << endl;
//     }

//     return 0;
// }
