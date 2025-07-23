#include <iostream>
#include <vector>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    

    long long int n, position;
    cin >> n >> position;

    long long int oddCount = (n + 1) / 2;

    if (position <= oddCount)
    {
        cout << 2 * position - 1 << endl;
    }
    else
    {
        long long int evenPos = position - oddCount;
        cout << 2 * evenPos << endl;
    }


    // long long int n, position, idx = 0;
    // cin >> n >> position;
    // vector<long long int>vec;
    // for (long long int i = 1; i <= n; i += 2){
    //     idx++;
    //     if (position == idx)
    //     {
    //         cout<< i <<endl;
    //         break;
    //     }
    // }

    // for (long long int i = 2; i <= n; i += 2){
    //     idx++;
    //     if (position == idx)
    //     {
    //         cout<< i <<endl;
    //         break;
    //     }
    // }
    
    return 0;
}