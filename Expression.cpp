// problem link : https://codeforces.com/problemset/problem/479/A
#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int a, b, c;
    cin >> a >> b >> c;
    if(a == 1 && a == b && b == c)
        cout << a + b + c;
    else if(a == 1 && b != 1 && c != 1){
        int temp = a + b;
        cout << (temp * c);
    }
    else if(a == 1 && b != 1 && c == 1){
        cout << a + b + c;
    }
    else if(a != 1 && b != 1 && c == 1){
        int temp = b + c;
        cout << a * temp;
    }
    else if(a == 1 && b == 1 && c != 1){
        int temp = b + a;
        cout << c * temp;
    }
    else if(a != 1 && b == 1 && c == 1){
        int temp = b + c;
        cout << a * temp;
    }
    else if(a != 1 && b == 1 && c != 1){
        int temp = a + b, temp2 = b + c;
        int ans = temp * c, ans2 = temp2 * a;

        if(ans > ans2) cout << ans;
        else cout << ans2;
    }
    else
        cout << a * b * c;
    return 0;
}