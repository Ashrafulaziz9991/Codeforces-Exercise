#define FAST_IO  ios_base::sync_with_stdio(0);cin.tie(0);
#include <bits/stdc++.h>
using namespace std;
int main()
{
    FAST_IO
    /*string s;
    getline(cin, s);
    
    cout<<s;*/
    //in the case of array
    int arr[] ={4,8,6,3,7};
    int arrsize = (sizeof(arr)/sizeof(arr[0]));
    int maxarr = *max_element(arr, arr+arrsize);
    int minarr = *min_element(arr, arr+arrsize);

    cout<<"Max element is "<<maxarr;
    cout<<"\nMinimum element is "<<minarr;

    //in the case of vector
    std::vector<int> vec = {3, 9, 4, 6, 2};
    int minInVector = *min_element(vec.begin(), vec.end());
    int maxInVector = *max_element(vec.begin(), vec.end());
    std::cout << "\nMaximum in vector: " << maxInVector << std::endl;
    std::cout << "Minimum in vector: " << minInVector << std::endl;

    // Find the minimum between a few numbers
    int num1 = 10, num2 = 7, num3 = 12;
    int minBetweenNumbers = std::min({num1, num2, num3});
    std::cout << "Minimum between numbers: " << minBetweenNumbers << std::endl;

    return  0;
}
