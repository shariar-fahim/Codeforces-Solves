#include<bits/stdc++.h>
using namespace std;
#define lungiman ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long int
#define ld long double
#define no cout<< "NO\n"
#define yes cout<< "YES\n"

int main()
{
    lungiman;
    ll testcase=1;
    cin>>testcase;
    while(testcase--)
    {
        ll n;
        cin>>n;
        vector<ll>v;
        for(ll i=0;i<n;i++)
        {
            ll a;
            cin>>a;
            v.push_back(a);
        }
        ll max=v[0];
        ll min=v[0];
        for(ll i=0;i<n;i++)
        {
           max=max | v[i];
           min=min & v[i];
        }
        cout<<max-min<<endl;
    }
    return 0;
}