#include <iostream>
#include <vector>
using namespace std;

int digit_extracts(int num){
    int temp, count = 0;
    while (num > 0)
    {
        temp = num % 10;
        count++;
        num/=10;
    }
    return count;
}

vector<int> round_nums(int nums){
    if(nums == 0) return {};
    int temp = 0;
    vector<int>ls;
    if(digit_extracts(nums) == 5)
        temp = nums % 10000;
    else if(digit_extracts(nums) == 4)
        temp = nums % 1000;
    else if(digit_extracts(nums) == 3)
        temp = nums % 100;
    else if(digit_extracts(nums) == 2)
        temp = nums % 10;
    
    int rem = nums - temp;
    ls.push_back(rem);
    vector<int> sub_sec = round_nums(temp);
    ls.insert(ls.end(), sub_sec.begin(), sub_sec.end());
    return ls;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> curr = round_nums(n);
        int counter = curr.size();
        cout << counter << endl;
        for (int i : curr)
            cout << i << " ";
        cout << endl;
    }
    return 0;
}