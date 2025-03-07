#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,m,c;
    cin>>n>>m>>c;
    vector<int>v(n),v1(m);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    for(int i=0;i<m;i++)
    {
        cin>>v1[i];
    }
    int ans=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(v[i]+v1[j]<=c)
            {
                ans++;
            }
        }
    }
    cout<<ans<<endl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin>>T;
    while(T--)
    {
        solve();
    }
    return 0;
}