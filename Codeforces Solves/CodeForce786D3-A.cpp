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
        int x,y,a,b;
        cin>>x>>y;
        int m=y%x;
        a=1;
        b=y/x;

        if (y < x)
            cout << 0 << " " << 0 << endl;
        else if (y == x)
            cout << 1 << " " << 1 << endl;
        else
        {
            if(m==0)
            {
                cout<<a<<" "<<b<<endl;
            }
            else
                cout<<"0"<<" "<<"0"<<endl;

        }
    }
    return 0;
}
