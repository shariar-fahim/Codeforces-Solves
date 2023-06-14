#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    //ios::sync_with_stdio(false);
    //cin.tie(0);

    ll test;
    cin >> test;

    while(test--)
    {   
          ll n;
          cin>>n;
          vector<ll>vec;
          vector<ll>vec2;
          for(ll i=0;i<n;i++)
            {
                ll k=0;
                cin>>k;
                vec.push_back(k);
                vec2.push_back(k);
            }
        sort(vec2.begin(), vec2.end());
        ll mx1=vec2[n-1];
        ll mx2=vec2[n-2];
        
         for( ll i=0;i<n;i++)
         {
            if(vec[i]==mx1)
                std::cout << vec[i]-mx2 <<" ";
            else
            {
                cout<<vec[i]-mx1<<" ";
            }
            
         }
         cout<<endl;
        
    }

    return 0;
}