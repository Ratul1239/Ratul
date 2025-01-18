#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    long long int ans=0;
    for(int i=0;i<n-1;i++)
    {
        int an=a[i+1]-a[i];
        //cout<<an<<endl;
        ans+=an;
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