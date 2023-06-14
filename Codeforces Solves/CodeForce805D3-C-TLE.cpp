#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string line;
        std::getline(std::cin, line);

        long long int n,k,a,b,i,j,m;
        cin>>n>>k;
        long long int arr[n];
        for(i=0; i<n; i++)
            cin>>arr[i];

        while(k--)
        {
            bool ans=false;
            cin>>a>>b;
            for(j=0; j<n; j++)
            {
                if(arr[j]==a)
                {
                    ans=true;
                    break;
                }
            }
            if(ans==true)
            {
                ans=false;
                for(m=j+1; m<n; m++)
                {
                    if(arr[m]==b)
                    {
                        ans=true;
                        break;
                    }
                }
            }
            if(ans)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
    }
    return 0;
}
