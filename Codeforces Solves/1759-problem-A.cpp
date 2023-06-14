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
          string s;
          cin>>s;
          ll len=s.size();
          string s1;
          for(ll i=0;i<len;i++)
            {
                s1.push_back('Y');
                s1.push_back('e');
                s1.push_back('s');
            }
         
       // cout<<s1<<endl;

        int found = s1.find(s);

        if( found >= 0)
            cout<<"YES"<<'\n';
        else
            cout<<"NO"<<'\n';

    }

    return 0;
}