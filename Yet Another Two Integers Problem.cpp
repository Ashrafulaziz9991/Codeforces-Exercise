/*
#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        long long count = 0;

        if (a > b)
        {
            while (a > b)
            {
                if (a >= 10)
                {
                    a -= 10;
                    count++;
                }
                else if (a >= 9)
                {
                    a -= 9;
                    count++;
                }
                else if (a >= 8)
                {
                    a -= 8;
                    count++;
                }
                else if (a >= 7)
                {
                    a -= 7;
                    count++;
                }
                else if (a >= 6)
                {
                    a -= 6;
                    count++;
                }
                else if (a >= 5)
                {
                    a -= 5;
                    count++;
                }
                else if (a >= 4)
                {
                    a -= 4;
                    count++;
                }
                else if (a >= 3)
                {
                    a -= 3;
                    count++;
                }
                else if (a >= 2)
                {
                    a -= 2;
                    count++;
                }
                else if (a >= 1)
                {
                    a -= 1;
                    count++;
                }
            }
        }
        else
        {
            while (b > a)
            {
                if (b >= 10)
                {
                    b -= 10;
                    count++;
                }
                else if (b >= 9)
                {
                    b -= 9;
                    count++;
                }
                else if (b >= 8)
                {
                    b -= 8;
                    count++;
                }
                else if (b >= 7)
                {
                    b -= 7;
                    count++;
                }
                else if (b >= 6)
                {
                    b -= 6;
                    count++;
                }
                else if (b >= 5)
                {
                    b -= 5;
                    count++;
                }
                else if (b >= 4)
                {
                    b -= 4;
                    count++;
                }
                else if (b >= 3)
                {
                    b -= 3;
                    count++;
                }
                else if (b >= 2)
                {
                    b -= 2;
                    count++;
                }
                else if (b >= 1)
                {
                    b -= 1;
                    count++;
                }
            }
        }
        cout << count << endl;
    }
    return 0;
}

*/

/**
 * optimised Version now 
 * problem link : https://codeforces.com/problemset/problem/1409/A
 */

#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;

    while (t--)
    {
        int a, b;
        cin >> a >> b;

        int diff = abs(a - b);
        long long counter = (diff / 10) + (diff % 10 != 0);
        cout << counter << endl;
    }

    return 0;
}