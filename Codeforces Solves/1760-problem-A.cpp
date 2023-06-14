#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    ll test;
    cin >> test;

    while(test--)
    {   
          ll a[3];
          for(int i=0;i<3;i++)
            cin>>a[i];
        
        sort(a,a+3);

        cout<<a[1]<<endl;
    }

    return 0;
}