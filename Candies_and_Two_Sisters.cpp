// problem link : https://codeforces.com/problemset/problem/1335/A

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
        long long int candie, a, counter = 0;
        cin >> candie;
        cout<<candie - (candie /2 + 1)<<"\n";
    }
    return 0;
}


// a = candie / 2;
//correct form also but O(n)
        // while (candie != a + 1)
        // {
        //     candie--;
        //     counter++;
        // }
        //cout << counter << "\n";

// candie - (candie /2 + 1)
/*
#define FAST_IO  ios_base::sync_with_stdio(0); cin.tie(0)
#include <bits/stdc++.h>
using namespace std;

int main() {
    FAST_IO

    long long int candie, a, b, counter = 0;
    cin >> candie;
    a = candie;
    //b = 0;

    while (a > b && b != 0) {
        cout << "A is " << a << " B is " << b << "\n";
        a--;
        b++;
        counter++;
    }

    cout << "Total result " << counter;
    return 0;
}



#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    double n;
    long long int ans;
    cin>>t;
    while(t--){
        ans=0;
        cin>>n;
        ans=ceil((n/2)-1);
        cout<<ans<<endl;

    }
    return 0;
}

SIMPLE INPUT
6
7
1
2
3
2000000000
763243547

#include <iostream>
#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0);

int main() {
    FAST_IO

    long long int candie, a, b, ans = 0, counter = 0;
    std::cin >> candie;

    a = candie;
    b = 0;  // Initialize b to 0

    // Use ternary conditional operator to simplify the if-else conditions
    std::cout << ((candie <= 2) ? ans : "Total result " + std::to_string(candie / 2) + "\n");

    return 0;
}

#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0);
#include <iostream>



int main() {
    //FAST_IO

    long long int candie, a, b, ans = 0, counter = 0;
    std::cin >> candie;
    a = candie;

    // Use ternary operator for the condition
    (candie == 0 || candie == 1 || candie == 2) ? std::cout << ans << "\n" :
    (
    // Use ternary operator for the loop condition
    while (a > b){
        a--;
        b++;
        counter++;

    }
    std::cout << "Total result " << counter - 1 << "\n";
    );

    return 0;
}

/*
#define FAST_IO  ios_base::sync_with_stdio(0);cin.tie(0);
#include <bits/stdc++.h>
using namespace std;

int main() {
    FAST_IO

    long long int candie, a, b, ans = 0, counter = 0;
    cin >> candie;
    a = candie;
    (candie <= 2) ? cout << ans << "\n" :(a>b ? (a--, b++, counter++, cout << "Total result " << counter - 1 << "\n") : );


}
*/
