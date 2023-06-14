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
        int a,b,c,x,y,z,Max;
        cin>>a>>b>>c;
        x= max(b,c)-a+1;
        y= max(a,c)-b+1;
        z= max(a,b)-c+1;
        (x<0)?cout<<"0 ":cout<<x<<" ";
        (y<0)?cout<<"0 ":cout<<y<<" ";
        (z<0)?cout<<"0 ":cout<<z;
        cout<<endl;
    }
    return 0;
}



