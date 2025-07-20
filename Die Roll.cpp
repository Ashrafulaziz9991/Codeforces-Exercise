// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
    
//     int a, b;
//     cin>>a>>b;

//     int mx = 6 - max(a,b)+1/6;

//     cout<<mx;

//     return 0;
// }


// #include <iostream>
// using namespace std;

// int main() {
//     int num1, num2, gcd;
//     cout << "\n Find the Greatest Common Divisor of two numbers:\n";
//     cout << "-----------------------------------------------------\n";
//     cout << " Input the first number: ";
//     cin >> num1;
//     cout << " Input the second number: ";
//     cin >> num2;

//     for (int i = 1; i <= num1 && i <= num2; i++) {
//         if (num1 % i == 0 && num2 % i == 0) {
//             gcd = i;
//         }
//     }
    

//     //cout<<prob/gcd<<"/"<<gcd<<endl;
//     //cout << " The Greatest Common Divisor is: " << gcd << endl;
//     return 0;
// }
/**
 * Using recursion
#include <iostream>
using namespace std;

int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

int main() {
    int a = 105, b = 30;
    cout << "GCD of " << a << " and " << b << " is " << gcd(a, b);
    return 0;
}
*/



#include <iostream>
using namespace std;

int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

int main()
{
    int a , b;
    cin>>a>>b;

    int total = 6, mx = max(a, b);
    int prob = 6 - mx + 1;
    int gcd_val = gcd(prob, total);

    prob/=gcd_val;
    total/=gcd_val;

    cout<<prob<<"/"<<total;

}