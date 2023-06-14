#include<bits/stdc++.h>
using namespace std;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin>>t;
    while(t--)
    {
        long long int n,a;
        cin>>n;

        map<int,int>m;

        for(int i=0; i<n; i++)
        {
            cin>>a;
            m[a]++;
        }
        vector<long long int>v;
        vector<long long int>v1;
        long long int Max=-1,i=0;
        for(auto it=m.begin(); it!=m.end(); it++)
        {
            //cout<<it->first<<" "<<it->second<<endl;
            v1.push_back(it->first);
            v.push_back(it->second);

            if(Max<it->second)
                Max=it->second;
        }
        if ( std::adjacent_find( v1.begin(), v1.end(), std::not_equal_to<>() ) == v1.end() )
        {
            if(n%2!=0)
                cout<<Max/2+1<<endl;
            else
                cout<<Max/2<<endl;
        }
        else if ( std::adjacent_find( v.begin(), v.end(), std::not_equal_to<>() ) == v.end() )
        {
            cout<<Max<<endl;
        }
        else
        {
            if(n%2!=0)
                cout<<Max/2+1<<endl;
            else
                cout<<Max/2<<endl;
        }
    }
    return 0;
}






