#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,f,s;
        cin>>n;
        f=n/3;
        s=n%3;
        if(s==0)
            printf("%d %d %d\n",f,f+1,f-1);
        else if(s==1)
            printf("%d %d %d\n",f,f+2,f-1);
        else
            printf("%d %d %d\n",f+1,f+2,f-1);
    }
    return 0;
}
