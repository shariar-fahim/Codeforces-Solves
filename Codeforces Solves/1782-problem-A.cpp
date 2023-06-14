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
    cin>>testcase;
    while(testcase--)
    {
        ll w,d,h,a,b,f,g;
        cin>>w>>d>>h>>a>>b>>f>>g; 
        ll ans1,ans2,ans3,ans4;
        ans1 = a+h+f+abs(g-b);
        ans2 = abs(w-a)+h+abs(w-f)+abs(g-b);
        ans3 = g+h+b+abs(a-f);
        ans4 = abs(d-g)+h+abs(d-b)+abs(a-f);
        cout<<min(min(ans1,ans2),min(ans3,ans4))<<"\n";
    }
    return 0;
}