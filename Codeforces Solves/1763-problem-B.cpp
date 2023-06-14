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
        ll n,k;
        cin>>n>>k;
        vector<ll>v;
        vector<ll>v2;
        vector<ll>v3;
        for(ll i=0;i<n;i++)
        {
          ll a;
          cin>>a;
          a-=k;
          if(a<=0)
            v.push_back(0);
          else
          {
            v.push_back(a);
            v3.push_back(a);
          }
        }
        for(ll i=0;i<n;i++)
        {
          ll a;
          cin>>a;
          v2.push_back(a);
        }
        ll cnt,p;
        while(1)
        {
           cnt=count(v.begin(),v.end(),0);
           //cout<<"cnt="<<cnt<<endl;
           if(cnt==v.size())
           {
            yes;
            break;
           }
           ll min= *min_element(v3.begin(),v3.end());
           //cout<<"min="<<min<<endl;
           
           auto it = find(v.begin(),v.end(),min);
           if(it!=v.end())
              p=it-v.begin();

           //cout<<"p="<<p<<endl;
           k=k-v2[p];
           //cout<<"k="<<k<<endl;
           if(k<=0)
           {
            no;
            break;
           }
           v3.clear();
           for(ll i=0;i<n;i++)
            {
              ll s=v[i];
              if(s-k<=0)
                v[i]=0;
              else
                {
                  v[i]-=k;
                  v3.push_back(v[i]);
                }
            }

        }
    }
    return 0;
}