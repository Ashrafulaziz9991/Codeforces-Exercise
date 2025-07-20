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
        string str;
        cin >> str;

        int count_a = 0;
        int count_b = 0;

        for (int i = 0; i < str.size(); i++)
        {
            if (str[i] == 'A')
                count_a++;
            else
                count_b++;
        }
        // cout<<"a found "<<count_a<<" times"<<endl;
        // cout<<"b found "<<count_b<<" times"<<endl;
        if (count_a > count_b)
            cout << "A" << endl;
        else
            cout << "B" << endl;
    }

    return 0;
}