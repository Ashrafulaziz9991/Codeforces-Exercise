#include<iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--)
    {
        int a, b;
        cin >> a >> b;
        int remainder = a % b;
        int counter = (remainder == 0) ? 0 : a+=1;

        cout << counter << "\n";
    }

    return 0;
}
