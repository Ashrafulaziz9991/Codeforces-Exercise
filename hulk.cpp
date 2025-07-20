#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    string s, s2, s3, s4, s5;

    s = "";
    s2 = "I hate ";
    s3 = " I love ";
    s4 = "that ";
    s5 = "it";

    // to be continued
    //  if (n == 1)
    //  {
    //      cout<<s4;
    //      return 0;
    //  }
    //  else if (n%2==0)
    //  {
    //      s+=s5;
    //  }
    //  else if (n%2!=0)
    //  {
    //      s+=s4;
    //  }
    //  for (int i = 1; i <= n; i++)
    //  {
    //      if (i % 2 != 0)
    //      {
    //          s+=s2;
    //          //s = s+s4;
    //      }
    //      else if(i % 2 == 0)
    //      {
    //          s+=s3;
    //          //s= s+s4;
    //      }
    //      if(i == n){
    //          s = s+s5;
    //          //s = s-s4;
    //      }
    //  }
    //  // if (n%2 == 0)
    //  // {
    //  //     s+=s5;
    //  // }
    //  // else
    //  //     s+=s4;
    //  cout<<s;
    //  while (d != n)
    //  {
    //      if (n == 1)
    //      {
    //          s+=s4;
    //      }
    //      if (d%2 != 0)
    //      {
    //          s+=s2;
    //      }
    //      else if(d%2 == 0)
    //          s+=s3;
    //      else if(d == n && n%2 == 0)
    //          s+=s5;
    //      else if(d == n && n%2 != 0)
    //          s+=s4;
    //      d++;
    //  }

    for (int i = 1; i < n; i++)
    {
        if (i % 2 != 0)
            s = s + s2 + s4;
        else if (i % 2 == 0)
            s = s + s3 + s4;
    }

    if ( n % 2 != 0)
        s = s +s2+ s5;
    else if ( n % 2 == 0)
        s = s+s3+s5;

    cout << s;

    return 0;
}