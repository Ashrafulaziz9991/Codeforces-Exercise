#define FAST_IO  ios_base::sync_with_stdio(0);cin.tie(0);
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    FAST_IO
    int t;cin>>t;
    while (t--)
    {
        int n;cin>>n;
        vector<int>sticks(n);
        for (int i = 0; i < n; ++i) {
            cin>>sticks[i];
            sticks[i] *= 2;
        }

        sort(sticks.begin(), sticks.end());

        int res = 0;

        for (int i = 0; i < n-2; ++i) {
            for (int j = i+1; j < n-1; ++j) {
                for (int k = j+1; k < n; ++k) {
                    if (sticks[i] + sticks[j] > sticks[k]) {
                        res++;
                    }
                }
            }
        }

        cout<<res<<"\n";
    }
    return  0;
}
