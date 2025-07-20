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

        int x = n+1, y = n-1;

        if (x % 3 == 0 || y % 3 == 0)
        {
            cout << "First\n";
        }
        else
            cout << "second\n";
    }

    return 0;
}

/*

#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false; // 0 and 1 are not prime numbers 
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int n;
    cin >> n;
    if (isPrime(n)) {
        cout << "prime";
    } else {
        cout << "composite";
    }
    return 0;
}

*/