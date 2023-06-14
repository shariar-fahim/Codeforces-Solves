#include<bits/stdc++.h>
using namespace std;
#define lungiman ios_base::sync_with_stdio(false); cin.tie(0);
#define ll long long int
#define ld long double
#define in(x) scanf("%lld",&x)
#define out(x) printf("%lld",x)
#define inc(x) scanf("%c",&x)
#define outc(x) printf("%c",x)
#define no printf("No\n")
#define yes printf("Yes\n")
#define nl printf("\n")
#define space printf(" ")


int main()
{
    //lungiman;
    ll testcase=1;
    cin>>testcase;
    while(testcase--)
    {
       ll k=0;
        string s;
        cin>>s;
        if(s.size()<=10)
        {
            cout<<s;
            nl;
        }  
        else
        {
                k=s.size()-2;
                outc(s[0]);
                out(k);
                outc(s[s.size()-1]);
                nl;
            }
        
    }
    return 0;
}