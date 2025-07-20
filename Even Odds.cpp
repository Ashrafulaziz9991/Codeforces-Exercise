#include <iostream>
#include <vector>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    long long int n, position, idx = 0;
    cin >> n >> position;
    long long int vec[n];
    for (int i = 1; i <= n; i += 2 && int j = 2 ; j <= n; j+=2){
        vec[idx++] = i;
        vec[idx++] = j;
    }
    for (int i = 2; i <= n; i += 2)
        vec[idx++] = i;

    cout << vec[position - 1];
    return 0;
}