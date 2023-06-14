#include<bits/stdc++.h>
using namespace std;
#define fastaf ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long int
#define ld long double
#define no cout<< "NO\n"
#define yes cout<< "YES\n"
#define pb push_back

int main()
{
    fastaf;
    ll testcase=1;
    cin>>testcase;
    while(testcase--)
    {
        ll n,sum=0,cnt=0,ans=0,max=0;
        cin>>n;
        ll a[n];

        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
            sum+=a[i];
        }
        if(sum%2==0)
            cout<<"0"<<endl;
        else
        {
            ans=10000000;
            for(ll i=0;i<n;i++)
            {
                cnt=0;
                if(a[i]%2==0)
                {
                    while(a[i]%2!=1)
                    {
                        a[i]=a[i]/2;
                        cnt++;
                    }
                }
                else
                {
                    while(a[i]%2!=0)
                    {
                        a[i]=a[i]/2;
                        cnt++;
                    }
                }
                if(cnt!=0)
                    ans = min(ans,cnt);
            }
            cout<<ans<<endl;
        }
    }
    return 0;
}