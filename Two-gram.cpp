// problem link : https://codeforces.com/problemset/problem/977/B

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
#include <climits>
#include <cstring>
#include <queue>
#include <stack>
#include <set>
#include <map>
#include <unordered_map>
#include <unordered_set>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    string str;
    cin >> str;

    unordered_map<string, int>freq;

    for(int i = 0; i < str.size() - 1; i++){
        string tmp = "";
        tmp.push_back(str[i]);
        tmp.push_back(str[i + 1]);
        freq[tmp]++;
    }

    string key;
    int mx = 0;

    for(auto[k, v] : freq){
        if(v > mx){
            key = k;
            mx = v;
        }
    }
    cout << key;
    return 0;
}