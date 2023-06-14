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
        ll a,b,c,x,y;
        cin>>a>>b>>c;
        x=a;
        y=abs(b-c)+c;
        if(x<y)
            cout<<"1"<<'\n';
        else if(x>y)
            cout<<"2"<<'\n';
        else if(x==y)
            cout<<"3"<<'\n';
    }

    return 0;
}

