#include<bits/stdc++.h>
using namespace std;
#define lungiman ios_base::sync_with_stdio(false); cin.tie(0);
#define ll long long int
#define ld long double
#define in(x) scanf("%lld",&x)
#define out(x) printf("%lld",x)
#define inc(x) scanf("%c",&x)
#define outc(x) printf("%c",x)
#define no printf("No\n")
#define yes printf("Yes\n")
#define nl printf("\n")
#define space printf(" ")


int main()
{
    //lungiman;
    ll testcase=1;
    cin>>testcase;
    while(testcase--)
    {
       ll n,cnt=0;
       in(n);
       vector<ll>vec;
       for(ll i=0;i<n;i++)
       {
        ll a;
        in(a);
        vec.push_back(a);
       }
       sort(vec.begin(),vec.end());
       cnt= (vec[0]==0?1:2);
       for(ll i=0;i<n-1;i++)
       {
        if(vec[i]<i+1 && vec[i+1]>=(i+2)) cnt++;
       }
       out(cnt);
       nl;
    }
    return 0;
}