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
          string s;
          cin>>s;
          ll k,temp = 0;
          for(ll i=0;i<n;i++)
          {
            
            k = s[i]+0;
            if(k>temp)
                temp=k;
            
           
               
          }
          std::cout <<temp-96<< std::endl;

    }

    return 0;
}