#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n[7];

        for(int i=0;i<7;i++)
            cin>>n[i];

        if(n[0]+n[1]+n[2]<n[6])
        {
            n[2]=n[2]+(n[6]-(n[0]+n[1]+n[2]));

            for(int i=0;i<3;i++)
            {
                cout<<n[i]<<" ";
            }
        }
        else if(n[0]+n[1]+n[2]>n[6])
        {
            n[2]=n[2]+((n[0]+n[1]+n[2])-n[6]);

            for(int i=0;i<3;i++)
            {
                cout<<n[i]<<" ";
            }
        }
        else
        {
            for(int i=0;i<3;i++)
            {
                cout<<n[i]<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
