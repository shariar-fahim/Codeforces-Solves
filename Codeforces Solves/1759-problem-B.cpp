#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin>>t;
    
    while(t--)
    {
        ll m, s, temp, k=1, max=0;
        ll a[100] = {0};
        cin>>m>>s;
        for(ll i=0; i<m; i++)
        {
            cin>>temp;
            a[temp]++;
            if(temp>max)
                max=temp;  
        }
        for(ll i=1; i<=max||s>0; i++)
        {
            if(a[i]==0)
                {
                    a[i]++;
                    s-=i;
                }
            if(s<0||a[i]>1)
                {
                    k=0;
                    break;
                }
        }
        if(k)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }

    return 0;
}