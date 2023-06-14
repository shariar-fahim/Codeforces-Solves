
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int ans[1001];
    int j=1;
        for(int i=1; i<=1666; i++)
        {
            if(i%3!=0 && i%10!=3)
            {
                ans[j]=i;
                j++;
            }
        }

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin >> n;
        cout << ans[n] << endl;
    }
    return 0;
}

