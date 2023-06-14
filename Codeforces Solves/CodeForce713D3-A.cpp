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
        int n;
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++)
            cin>>a[i];
        if(a[1]!=a[0] && a[0]==a[2])
            cout<<2<<endl;
        else
        {
            for(int i=0; i<n; i++)
            {
                if(a[1]!=a[i])
                {
                    cout<<i+1<<endl;
                    break;
                }
            }

        }
    }
    return 0;
}




