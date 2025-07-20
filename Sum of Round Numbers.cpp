#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int num, count = 0;
    cin >> num;
    while (1)
    {
        if (num % 10 != 0)
        {
            num -= (num % 10);
            cout << num << " " << num % 10;
            count++;
        }
        else
            break;
    }

    cout << endl;

    cout << count;

    return 0;
}
// use "ctrl k + ctrl f" to format selection