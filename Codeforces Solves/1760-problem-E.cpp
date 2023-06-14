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
          ll cnt=0;
          ll cnt2=0;
          for(ll i=0;i<n;i++)
          {
            if(vec[i]==1)
            {
                for(ll j=i+1;j<n;j++)
                {
                    if(vec[j]==0)
                        cnt++;
                }
            }
          }
        if(vec[0] == 0)
        {
           replace(vec.begin(),vec.begin()+1,0,1); 
        }
        else
        {
            ll index =-1 , index2 = -1;
         auto it = find(vec.begin(), vec.end(), 0);
         if(it!=vec.end())
         {
            index = it - vec.begin();
            
         }

         reverse(vec.begin(),vec.end());
         auto it2 = find(vec.begin(), vec.end(), 1);
         if(it2!=vec.end())
         {
            index2 = it2 - vec.begin();
         }


        if(it < it2)
         {
            reverse(vec.begin(),vec.end());
            replace(vec.begin(),vec.begin()+index+1,0,1);
         }
         else
         {
            replace(vec.begin(),vec.begin()+index2+1,1,0);
            reverse(vec.begin(),vec.end());
         }
        }

         for(ll i=0;i<n;i++)
          {
            if(vec[i]==1)
            {
                for(ll j=i+1;j<n;j++)
                {
                    if(vec[j]==0)
                        cnt2++;
                }
            }
          }

          if(cnt>cnt2)
            std::cout << cnt << std::endl;
          else
            std::cout << cnt2 << std::endl;
    }
    return 0;
}