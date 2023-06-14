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
        ll n;
        cin>>n;
        string s1,s2;
        cin>>s1;
        for(ll i=n-1;i>=0;)
        {
            if(s1[i]!='0')
            {
                char c;
                c=
                s2.push_back(s1[i]+48;);
                i--;
            }
            else(s1[i]=='0')
            {
                s2.push_back(s1[i-2]*10+s1[i-1]+80);
                i=i-3;
            }
        }
        reverse(s2.begin(), s2.end());
        cout<<s2<<'\n';
    }

    return 0;
}


