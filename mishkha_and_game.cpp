/*#define FAST_IO  ios_base::sync_with_stdio(0);cin.tie(0);
#include <bits/stdc++.h>
using namespace std;
int main()
{
    FAST_IO
    int n, m, c, m_count=0, c_count=0, d_count=0;cin>>n;
    while (n--)
    {
        cin>>m>>c;
        m>c? m_count++ : c_count++;
    }
    cout<<(m_count==c_count? "Friendship is magic!^^\n" : (m_count>c_count? "Mishka\n" : "Chris\n"));
    return 0;
}
*/

#define FAST_IO  ios_base::sync_with_stdio(0);cin.tie(0);
#include <bits/stdc++.h>
using namespace std;
int main()
{
    FAST_IO
    int n, m, c, m_count=0, c_count=0, d_count=0;cin>>n;
    while (n--)
    {
        cin>>m>>c;
        //(m==c? d_count++ : (m>c? m_count++ : c_count));
        if(m==c)
            d_count++;
        else if(m>c)
            m_count++;
        else if(m<c)
            c_count++;
    }
    /*cout<<"m won "<<m_count<<"\n";
    cout<<"c won "<<c_count<<"\n";
    cout<<"Draw "<<d_count<<"\n";*/
    //cout<<(m_count==c_count? "Friendship is magic!^^\n" : (m_count>c_count? "Mishka\n" : "Chris\n"));
    if(m_count>c_count)
    {
        cout<<"Mishka\n";
        return  0;
    }
    else if(c_count>m_count)
    {
        cout<<"chris\n";
        return  0;
    }
    else
    {
        cout<<"Friendship is magic!^^\n";
    }
    return 0;
}
