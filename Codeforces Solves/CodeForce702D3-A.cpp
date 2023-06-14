#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin>>t;
    while(t--)
    {
        int n,cnt=0;
        cin>>n;
        double a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        for(int i=0;i<n-1;i++)
        {
            if(ceil(max(a[i],a[i+1]))/(min(a[i],a[i+1]))>2.0)
            {
                int Min= min(a[i],a[i+1]);
                int Max= max(a[i],a[i+1]);
                while(Max>Min*2)
                {
                    cnt++;
                    Min*=2;
                }
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}





