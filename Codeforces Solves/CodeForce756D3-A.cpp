#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    ll t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        ll len = s.size();
        if(s[len-1]=='2'||s[len-1]=='4'|| s[len-1]=='6'||s[len-1]=='8')
            cout<<"0"<<endl;
        else if(s[0]=='2'||s[0]=='4'|| s[0]=='6'||s[0]=='8')
            cout<<"1"<<endl;
        else
        {
            ll flag=0;
            for (ll i = 0; i < len; i++)
            {
                if (s[i]=='2'||s[i] =='4'||s[i] =='6'||s[i] =='8')
                {
                    flag = 1;
                    break;
                }
            }
            if(flag==1)
                cout<<"2"<<endl;
            else
                cout<<"-1"<<endl;
        }
    }
    return 0;
}





