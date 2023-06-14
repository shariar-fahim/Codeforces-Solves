#include<bits/stdc++.h>
using namespace std;
#define fastaf ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long int


int main()
{
    fastaf;
    ll testcase=1;
    cin>>testcase;
    while(testcase--)
    {
        ll n,ans=0;
        cin>>n;
        while(n/10!=0)
        {
            ans+=9;
            n/=10;
        }
        cout<<ans+n<<endl;
    }
    return 0;
}