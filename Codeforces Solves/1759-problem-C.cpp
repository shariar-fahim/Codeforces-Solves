#include <bits/stdc++.h>
using namespace std;
int main(){
int t;
cin >> t;
while (t--)
{
   int l,r,x,a,b;
   cin>>l>>r>>x;
   cin>>a>>b;
   if(a==b)cout<<0<<endl;
   else if(abs(a-b)>=x) cout<<1<<endl;
   else
   {
    if((max(abs(l-b),abs(r-b))>=x) && (max(abs(l-a),abs(r-a))>=x))
    {
        if((abs(l-b)>=x && abs(l-a)>=x)||(abs(r-b)>=x &&abs(r-a)>=x)) cout<<2<<endl;
        else cout<<3<<endl;
    }
    else cout<<-1<<endl;
   }
}
}