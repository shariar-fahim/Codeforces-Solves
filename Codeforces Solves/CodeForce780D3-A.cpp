#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        if(a==0)
            printf("1\n");
        else
            printf("%d\n",a+b*2+1);
    }
    return 0;
}


