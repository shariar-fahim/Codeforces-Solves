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
        int n;
        cin>>n;
        string s;
        cin>>s;
        bool flag = true;
        for(int i=1; i<s.size(); i++)
        {
            if(s[i]!=s[i-1])
            {
                for(int j=0; j<i; j++)
                {
                    if(s[j]==s[i])
                    {
                        flag = false;
                        break;
                    }
                }
            }
        }
        if(flag)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}



