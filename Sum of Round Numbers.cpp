/*
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int num, count = 0;
    cin >> num;
    while (1)
    {
        if (num % 10 != 0)
        {
            num -= (num % 10);
            cout << num << " " << num % 10;
            count++;
        }
        else
            break;
    }

    cout << endl;

    cout << count;

    return 0;
}
*/
// use "ctrl k + ctrl f" to format selection


/*

count num lenght
assaume len = 5
num = x%1e5
numrem = x - num

n = 123654

100000

100000


*/

#include <bits/stdc++.h>
using namespace std;

class Number{
public:

    int number;

    Number(int num){
        this->number = num;
    }

    void digit_extract(int num){
        int temp, count = 0;
        while (num > 0)
        {
            temp = num % 10;
            cout<< temp<<" ";
            count++;
            num/=10;
        }   
    }

    void digit_extracttwo(int num){
        int temp, count = 0;
        while (num > 0)
        {
            // temp = num % 1e2;
            cout<< temp<<" ";
            count++;
            num/=1e2;
        }
    }
};

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n = 10324;

    cout<<n%10<<endl;
    cout<<n%100<<endl;
    cout<<n%1000<<endl;
    cout<<n%100000<<endl;
    
    return 0;
}