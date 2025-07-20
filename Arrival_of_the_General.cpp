#define FAST_IO  ios_base::sync_with_stdio(0);cin.tie(0);
#include <bits/stdc++.h>
using namespace std;
int main()
{
    FAST_IO
    int n;cin>>n;int maxi = 0, max_pos;
    int mini = 101, min_pos;
    vector<int>vec(n);
    for (int i = 0; i < n; ++i) {
        cin>>vec[i];
    }
    /*for (int i:vec) {
        cout<<i<<endl;
    }*/
    /*
    int maxi = vec[0], max_pos;
    int mini = vec[0], min_pos;
*/
    for (int i = 0; i < n; ++i) {
        if (vec[i]>=maxi)
        {
            maxi = vec[i];
            max_pos = i;
        }
        if (vec[i]<=mini)
        {
            mini = vec[i];
            min_pos = i;
        }
    }
    /*cout<<"Max number "<<maxi<<endl;
    cout<<"Min number "<<mini<<endl;
    cout<<"Max position "<<max_pos+1<<endl;
    cout<<"Min position "<<min_pos+1<<endl;
    */
    if(max_pos>min_pos)
    {
        min_pos++;
    }
    cout<<max_pos+(n-1)-min_pos;
    return  0;
}
