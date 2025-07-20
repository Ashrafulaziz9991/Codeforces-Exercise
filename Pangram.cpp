#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    cin.ignore();
    string str;
    cin >> str;
    set<char> st;
    for (auto &&i : str)
        st.insert(tolower(i));
    if (st.size() < 26)
        cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl; 
    return 0;
}



/* 
 
    if (check(str))
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    for (auto &&i : ltr)
    {
        cout<< i <<" ";
    }
    for (int i = 0; i < ltr.size(); i++)
    {
        cout<<ltr[i]<<" ";
    }
    for (auto i : st)
    {
        if (st.find(i) != ltr.end())
        {
            //cout<<"Yes"<<endl;
            //return;
            flag = 1;
            break;
        }
    }
    if (flag == 1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    return  0;

    cout << ch;
    */


   // bool flag = true;
    // //vector<int> v;
    // // set<char>ltr = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    // int v[] = new int[26];
    // for (int i = 0; i < str.size(); ++i)
    // {
    //     char now = str.at(i);
    //     if (str[i] >= 'a' && str[i] <= 'z')
    //         v[now - 'a']++;
    //     else if (str[i] >= 'A' && str[i] <= 'Z')
    //         v[now - 'a']++;
    // }
    // for (int i = 0; i < 26; i++)
    // {
    //     if (v[i] == 0)
    //     {
    //         flag = false;
    //         break;
    //     }
    // }
    // if (flag == true)
    //     cout << "YES";
    // else
    //     cout << "NO";
    // cout<<endl;