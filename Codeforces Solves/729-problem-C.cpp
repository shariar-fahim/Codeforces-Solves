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
        string s,s1,s2;
        cin>>s;
        s2=s;
        ll m=abs(s[0]-s[s.size()-1]);

        multimap<char,ll>mp;
        for(ll i=0; i<s.size(); i++)
            mp.insert(pair<char,ll>(s[i],i+1));

        sort(s.begin()+1,s.end()-1);

        if(s[0]<=s[s.size()-1])
        {
            for(ll i=0; i<s.size(); i++)
            {
                if(s[i]>=s[0] && s[i]<=s[s.size()-1])
                {
                    s1.push_back(s[i]);
                }
                else
                    mp.erase(s[i]);
            }
        }
        else if(s[0]>s[s.size()-1])
        {
            reverse(s.begin()+1,s.end()-1);
            for(ll i=0; i<s.size(); i++)
            {
                if(s[i]<=s[0] && s[i]>=s[s.size()-1])
                {
                    s1.push_back(s[i]);
                }
                else
                    mp.erase(s[i]);
            }
        }

        cout<<m<<" "<<s1.size()<<'\n';

        multimap<char, ll>::iterator itr;
        for(ll i=0;i<s1.size();i++)
        {
            auto it=mp.find(s1[i]);
            cout<<it->second<<" ";
            mp.erase(it);
        }
        cout<<'\n';
    }

    return 0;
}
