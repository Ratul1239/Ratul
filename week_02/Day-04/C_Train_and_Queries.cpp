#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        map<int,set<int>>mp;
        for(int i=1;i<=n;i++)
        {
            int x;
            cin>>x;
            mp[x].insert(i);
        }
        for(int i=1;i<=m;i++)
        {
            int left,right;
            cin>>left>>right;
            if((mp.find(left)==mp.end())||(mp.find(right)==mp.end()))
            {
                cout<<"NO"<<endl;
            }
            else 
            {
                 int start=*mp[left].begin();
                int end=*mp[right].rbegin();
                if(start<end)cout<<"YES"<<endl;
                else cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}