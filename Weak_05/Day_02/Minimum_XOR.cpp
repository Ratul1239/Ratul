#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    int XOR=0;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        XOR^=v[i];
    }
    int ans=XOR;
    for(int i=0;i<n;i++)
    {
        int currant_XOR=XOR^v[i];
        ans=min(ans,currant_XOR);
    }
    cout<<ans<<endl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}