#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    ll test;
    cin >> test;

    while(test--)
    {

        ll n=0,flag=1;
        cin>>n;
        map<ll,ll>mp;
        ll a[n];
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
            mp[a[i]]++;
        }
        for(ll i=0;i<n;i++)
        {
            if(mp[a[i]]>1)
            {
                flag=0;
                break;
            }
        }
        if(flag)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}




