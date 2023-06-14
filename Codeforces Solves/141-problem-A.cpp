#include<bits/stdc++.h>
using namespace std;
#define lungiman ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long int
#define ld long double
#define no cout<< "NO\n"
#define yes cout<< "YES\n"

int main()
{
    lungiman;
    ll testcase=1;
    //cin>>testcase;
    while(testcase--)
    {
        ll flag = 1;
        string s1,s2,s3;
        map<char,ll>m1,m2;
        cin>>s1>>s2>>s3;
        s1=s1+s2;
        
        ///Solution Using Map
        for(ll i=0;i<s1.size();i++)
            m1[s1[i]]++;
        for(ll i=0;i<s3.size();i++)
            m2[s3[i]]++;
        
         if(m1.size()<m2.size())
            m1['{']++;
         else if(m1.size()>m2.size())
            m2['}']++;

        for(auto it=m1.begin(),it1=m2.begin();it!=m1.end(),it1!=m2.end();it++,it1++)
            {
                if(it->first != it1->first)
                   {
                        flag=0;
                        break;
                   }
                else if(it->second != it1->second)
                    {
                        flag=0;
                        break;
                    }
            }

        (flag)?yes:no;

    }
    return 0;
}