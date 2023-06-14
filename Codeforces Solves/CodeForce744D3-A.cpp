
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
       string s;
       cin>>s;
       int len = s.size();
       if(len%2!=0) cout<<"NO"<<endl;
       else
       {
           int a=0,b=0,c=0;
           for(int i=0;i<len;i++)
           {
               if(s[i]=='A') a++;
               else if (s[i]=='B') b++;
               else if (s[i]=='C') c++;
           }
           if(a+c==b)
            cout<<"YES"<<endl;
           else
            cout<<"NO"<<endl;
       }
    }
    return 0;
}
