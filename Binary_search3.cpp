#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << "Enter the size of array: ";
    int n, target;
    cin >> n;
    cout << "Choose your target: ";
    cin >> target;
    vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    bool flag = false;
    int high = n - 1, low = 0, mid;
    while (low <= high)
    {
        mid = (high + low) / 2;
        if (v[mid] == target)
        {
            cout << "YES " << mid + 1 << endl; // Fix: print mid + 1
            flag = true;
            break;
        }
        else if (v[mid] > target)
        {
            high = mid - 1;
        }
        else //(v[mid] < target)
        {
            low = mid + 1;
        }
    }
    if (!flag)
    {
        cout << "NOT EXIST" << endl;
    }
    return 0;
}