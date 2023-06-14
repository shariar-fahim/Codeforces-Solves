#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t,cnt;
    cin>>t;
    while(t--)
    {
        string s,c;
        cin>>s>>c;
        int len=s.size();
        cnt=0;
        if(len==1)
        {
            if(s==c)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
        else
        {
            for(int i=0;i<len;i+=2)
            {
                if(s[i]==c[0])
                {
                    cnt++;
                }
            }
            if(cnt>0)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
    }
    return 0;
}

