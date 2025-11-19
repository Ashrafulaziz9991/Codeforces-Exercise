// problem link : https://codeforces.com/problemset/problem/996/A
#include <bits/stdc++.h>
using namespace std;

int counting(int amount){
    if(amount == 0) 
        return 0;
    int count = 0;
    if(amount % 100 == 0)
        return (amount / 100) + counting(0);

    else if(amount % 100 >= 20){
        amount -= 20;
        count++;
    }
    else if(amount % 100 >= 10){
        amount -= 10;
        count++;
    }
    else if(amount % 10 == 9){
        amount -= 4;
        count += 4;
    }
    else if(amount % 10 == 8){
        amount -= 3;
        count += 3;
    }
    else if(amount % 10 == 7){
        amount -= 2;
        count += 2;
    }
    else if(amount % 10 == 6){
        amount -= 1;
        count += 1;
    }
    else if(amount % 10 == 5){
        amount -= 5;
        count++;
    }
    else if(amount % 10 == 4){
        amount -= 4;
        count += 4;
    }
    else if(amount % 10 == 3){
        amount -= 3;
        count += 3;
    }
    else if(amount % 10 == 2){
        amount -= 2;
        count += 2;
    }
    else if(amount % 10 == 1){
        amount -= 1;
        count += 1;
    }
    return count + counting(amount);  // <-- FIX
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n;
    cout << counting(n);    
    return 0;
}

/**
 * take a money as a input
 * compare the hole amount with according to its max amount of array
 * & erase rest of note compare the rest money amount
 * count the whole process & return the count number as a result
 **/