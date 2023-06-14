#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,ans;
        cin>>n;
        if(n==0)
            cout<<0<<endl;
        else if(n <= 9)
        {
            ans= abs(n - 1);
            cout<<ans<<endl;
        }
        else if ( n>=10 && n<=99)
        {
            {
                ans= abs(n - 10);
                cout<<ans<<endl;
            }
        }
        else if ( n>=100 && n<=999)
        {
            {
                ans= abs(n - 100);
                cout<<ans<<endl;
            }
        }
        else if ( n>=1000 && n<=9999)
        {
            {
                ans= abs(n - 1000);
                cout<<ans<<endl;
            }
        }
        else if ( n>=10000 && n<=99999)
        {
            {
                ans= abs(n - 10000);
                cout<<ans<<endl;
            }
        }
        else if ( n>=100000 && n<=999999)
        {
            {
                ans= abs(n - 100000);
                cout<<ans<<endl;
            }
        }
        else if ( n>=1000000 && n<=9999999)
        {
            {
                ans= abs(n - 1000000);
                cout<<ans<<endl;
            }
        }
        else if ( n>=10000000 && n<=99999999)
        {
            {
                ans= abs(n - 10000000);
                cout<<ans<<endl;
            }
        }
        else if ( n>=100000000 && n<=999999999)
        {
            {
                ans= abs(n - 100000000);
                cout<<ans<<endl;
            }
        }
        else if ( n>=1000000000 && n<=9999999999)
        {
            {
                ans= abs(n - 1000000000);
                cout<<ans<<endl;
            }
        }
    }
    return 0;
}
