#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
#define no cout<< "NO\n"
#define yes cout<< "YES\n"

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    ll testcase=1;
    cin>>testcase;
    while(testcase--)
    {
        ll n,m=0;
        vector<ll>v;
        cin>>n;
        for(ll i=1;i<=n;i++)
        {
            cin>>m;
            ll x=1;
            while(x<m)
                x*=2;
                
            v.push_back(i);
            v.push_back(x-m);
        }
        cout<<v.size()/2<<endl;
        for(ll i=0;i<v.size();i+=2)
            {
                cout<<v[i]<<" "<<v[i+1]<<endl;
            }
   }
    return 0;
}