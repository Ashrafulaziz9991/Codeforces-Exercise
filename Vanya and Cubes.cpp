#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int level = 0; 
    int total = 0; 

    for (int i = 1; ; i++) {
        int need = i * (i + 1) / 2;

        if (total + need <= n) {
            total += need;
            level++;
        }
        else {
            break;
        }
    }

    cout << level << endl;
    return 0;
}
