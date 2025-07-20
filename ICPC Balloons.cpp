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
        int n;
        cin >> n;
        cin.ignore();
        string str;
        cin >> str;
        set<char> p;

        for (auto &&i : str)
        {
            // q.push(i);
            p.insert(i);
        }
        // while (!q.empty())
        // {
        //     cout<<q.front()<<endl;
        //     q.pop();
        // }

        // solve method
        int d = str.size() - p.size();
        int ballons = d + p.size() * 2;

        cout << ballons << endl;
    }

    return 0;
}