#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, minitues, c, count = 0;
    cin>>n>>minitues;

    int  solved = 0;

    vector<int>v, v2, v3;
    for (int i = 1; i <= n; i++)
    {
        c = i*5;
        if(count + c + minitues <= 240){
            count = count + c ;
            solved++;
        }
        else
            break;
    }
    cout<<solved;
    return 0;
}

// #define l_time 60 sec = 1 Minits
// #define m_time 60 minits = 1 hr
// #define h_time 24 hr = 1 day

// #include <iostream>
// #include <ctime>

// int main() {
//     // Record the start time
//     time_t start = time(NULL);

//     cin>>start;
//     // Your program code here

//     // Record the end time
//     time_t end = time(NULL);
//     //end = 60;

//     cin>>end;
//     // Calculate the elapsed time
//     double elapsed = difftime(end, start);

//     std::cout << "Elapsed time: " << elapsed << " seconds" << std::endl;

//     return 0;
// }


