/*
Team Olympiad problem link https://codeforces.com/problemset/problem/490/A
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin >> n;

    vector<int> a(n), program, mathmatician, sportsman;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++) {
        if (a[i] == 1) {
            program.push_back(i + 1);
        } else if (a[i] == 2) {
            mathmatician.push_back(i + 1);
        } else {
            sportsman.push_back(i + 1);
        }
    }

    int teams = min({program.size(), mathmatician.size(), sportsman.size()});
    
    if(teams == 0) {
        cout << 0 << endl;
        return 0;
    }

    cout << teams << endl;

    for (int i = 0; i < teams; i++) {
        cout << program[i] << " " << mathmatician[i] << " " << sportsman[i] << endl;
    }
    return 0;
}