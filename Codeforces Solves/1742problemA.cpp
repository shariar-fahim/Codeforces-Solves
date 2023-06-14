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

        ll a,b,c;
        cin>>a>>b>>c;
        if((a+b==c) || (a+c==b) || (c+b==a))
           cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}



