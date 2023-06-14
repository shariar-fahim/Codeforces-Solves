#include<bits/stdc++.h>
using namespace std;
#define fastaf ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long int
#define ld long double
void solve()
{
     ll n;
     cin>>n;
     ll a[n];
     for(ll i=0;i<n;i++)
      cin>>a[i];

    sort(a, a + n);
    ll ans=0,ans2=0;
    for(ll i=0;i<n;i++)
    {
      if(a[i] == a[0])
        ans++;
      else
        break;
    }
    if(ans==n)
      cout<<n*(n-1)<<endl;
    else
    {
      for(ll i=n-1;i>=0;i--)
       {
      if(a[i] == a[n-1])
        ans2++;
      else
        break;
      }
    cout<<ans*(ans2*2)<<endl;
    }
    

}

int main()
{
    fastaf;
    ll tc=1;
    cin >> tc;
    for (ll t=1; t<=tc; t++)
    {   
      //cout << "Case #" << t << ": ";
      solve();
    }
    return 0;
}