#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll t,k,cnt;
    char c;
    cin>>t;
    while(t--)
    {
        k=0;
        for(ll i=1; i<=8; i++)
        {
            cnt=0;
            for(ll j=1; j<=8; j++)
            {
                cin>>c;
                if(c=='R')
                    cnt++;
            }
            if(cnt==8)
                k=1;
        }
        if(k==1)
            cout<<"R"<<endl;
        else
            cout<<"B"<<endl;
    }
    return 0;
}
