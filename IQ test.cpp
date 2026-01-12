
/**
 * camel case

std::string toCamelCase(const std::string& sentence) {
    std::string camelCaseSentence;
    bool capitalizeNext = false;
    for (char c : sentence) {
        if (c == ' ') {
            capitalizeNext = true;
        } else if (capitalizeNext) {
            camelCaseSentence += std::toupper(c);
            capitalizeNext = false;
        } else {
            camelCaseSentence += c;
        }
    }
    return camelCaseSentence;
}


 */

// problem link : https://codeforces.com/problemset/problem/25/A

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
#include <climits>
#include <cstring>
#include <queue>
#include <stack>
#include <set>
#include <map>
#include <unordered_map>
#include <unordered_set>

using namespace std;

bool even(int num)
{
    return num % 2 == 0;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, odd_cnt = 0, eve_cnt = 0, index;
    vector<int>nums = {1, 2, 1, 1};
    for(int i : nums){
        if(i % 2 == 0) eve_cnt++;
        else odd_cnt++;
    }

    if(eve_cnt < odd_cnt){
        for (int i = 0; i < nums.size(); i++)
        {
            if(nums[i] % 2 == 0) index = i;
        }
    }
    else{
        for (int i = 0; i < nums.size(); i++)
        {
            if(nums[i] % 2 != 0) index = i;
        }
    }
    cout << eve_cnt << endl;
    cout << odd_cnt << endl;
    cout << index << endl;
    return 0;
}