// problem link : https://codeforces.com/problemset/problem/432/A

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int n, k, counter = 0;
    cin >> n >> k;
    vector<int>contest(n);
    for(int i = 0; i < contest.size(); i++){
        cin >> contest[i];
        if(contest[i] + k <= 5)
            counter++;
    }
    cout << counter/3;
    return 0;
}
/*

int counting(int amount){
    if(amount == 0)
        return 0;

    int count = 0;

    // for amounts divisible by 100
    if(amount % 100 == 0) {
        return (amount / 100) + counting(0);
    }

    else if(amount % 100 >= 20) {
        amount -= 20;
        count++;
    }
    else if(amount % 100 >= 10) {
        amount -= 10;
        count++;
    }

    // Handle last digits
    else if(amount % 10 == 9) {
        amount -= 4; count += 4;
    }
    else if(amount % 10 == 8) {
        amount -= 3; count += 3;
    }
    else if(amount % 10 == 7) {
        amount -= 2; count += 2;
    }
    else if(amount % 10 == 6) {
        amount -= 1; count += 1;
    }
    else if(amount % 10 == 5) {
        amount -= 5; count++;
    }
    else if(amount % 10 == 4) {
        amount -= 4; count += 4;
    }
    else if(amount % 10 == 3) {
        amount -= 3; count += 3;
    }
    else if(amount % 10 == 2) {
        amount -= 2; count += 2;
    }
    else if(amount % 10 == 1) {
        amount -= 1; count += 1;
    }

    return count + counting(amount); // <-- FIXED
}

*/