#include<bits/stdc++.h>
using namespace std;
void solve()
{
    long long int a,b;
    cin>>a>>b;
    int ans=a^b;
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