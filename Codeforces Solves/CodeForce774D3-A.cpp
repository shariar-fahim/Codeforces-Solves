#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,i;
        cin>>n;
        long long int a[n];
        for(i=0;i<n;i++)
            cin>>a[i];

        long long int &Max= *max_element(a,a+n);
        long long int &Min= *min_element(a,a+n);

        printf("%lld\n",Max-Min);
    }
    return 0;
}



