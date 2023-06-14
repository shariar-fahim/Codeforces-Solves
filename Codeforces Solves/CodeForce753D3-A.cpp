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
        string s1,s2,s3;
        cin>>s1;
        cin>>s2;

        ll len1=s1.size();
        ll len2=s2.size();

        if(len2 == 1)
            cout<<0<<endl;
        else
        {
            ///removing repeated char
            auto res = unique(s2.begin(), s2.end());
            s3 = string(s2.begin(), res);
            ll len3=s3.size();

            ll sum=0;
            vector<ll> ans;
            for(ll i=0; i<len3; i++)
            {
                size_t found =s1.find(s3[i]) + 1 ;

                if(found != string::npos)
                {
                    ans.push_back(found);
                }

            }

            for(ll j=0; j<ans.size()-1; j++)
            {
                sum+=abs(ans[j]-ans[j+1]);
            }
            cout<<sum<<endl;
        }
    }
    return 0;
}




