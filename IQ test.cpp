#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, oddcount = 0, evencount = 0;
    cin >> n;
    vector<int> v, v2, v3;
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
        if (x % 2 != 0)
        {
            oddcount = count(v.begin(), v.end(), v[i]);
            // v3.push_back(i);
        }
        else
        {
            evencount = count(v.begin(), v.end(), v[i]);
            // v2.push_back(i);
        }
    }

    if (oddcount < evencount)
        cout << oddcount << endl;
    else
        cout << evencount << endl;

    // cout<<oddcount<<endl;
    // cout<<evencount<<endl;

    // for (auto &&i : v2)
    // {
    //     //cout<< i <<" ";
    // }
    // cout<<endl;

    // for (auto &&i : v3)
    // {
    //     cout<< i <<" ";
    // }

    //cout << u;

    return 0;
}

/**
 * camel case

std::string toCamelCase(const std::string& sentence) {
    std::string camelCaseSentence;
    bool capitalizeNext = false;
    for (char c : sentence) {
        if (c == ' ') {
            capitalizeNext = true;
        } else if (capitalizeNext) {
            camelCaseSentence += std::toupper(c);
            capitalizeNext = false;
        } else {
            camelCaseSentence += c;
        }
    }
    return camelCaseSentence;
}


 */