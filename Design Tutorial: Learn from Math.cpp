// problem link : https://codeforces.com/problemset/problem/472/A

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

bool isPrime(int n) {
    if(n < 2) return false;
    if(n == 2) return true;
    if(n % 2 == 0) return false;

    for(int i = 3; i * i <= n; i += 2) {
        if(n % i == 0) return false;
    }
    return true;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    int a = n / 2;
    int b = n - a;

    while (isPrime(a) || isPrime(b))
    {
        a--;
        b++;
    }
    cout << a << " " << b;

    return 0;
}

/**
    if n is even
    if(n % 2 == 0){
        int a = n / 2;
        int b = n / 2;

        if(!isPrime(a))
            cout << a <<" "<<b ;
        else
            cout << a - 1 << " " <<b + 1;
    }
    // 19 ----> 10 9, 15 -----> 7  8, 11 ------> 6  5
    // if n is odd
    else {
    int a = (n / 2) + 1;
    int b = n / 2;

    while (isPrime(a) || isPrime(b)) {
        a--;
        b++;
    }

    cout << a << " " << b;
    }

    cout << isPrime(n);
*/
