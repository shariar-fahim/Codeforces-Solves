#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    ll t;
    cin>>t;
    while(t--)
    {
      string s;
      cin>>s;
      ll len = s.size();

      if(len%2==1) cout<<"NO"<<endl;
      else
      {
          bool flag = false;

          for(ll i=0;i<len/2;i++)
          {
              if(s[i]!=s[i+len/2])
              {
                  flag = true;
                  break;
              }
          }
          if (flag) cout << "NO" << endl;
          else cout << "YES" << endl;
      }
    }
    return 0;
}


