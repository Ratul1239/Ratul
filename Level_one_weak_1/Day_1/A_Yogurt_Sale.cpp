#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,a,b;
    cin>>n>>a>>b;
    int curr=(n/2),rem=(n%2);
    int ans=min((b*curr)+(rem*a),(a*n));
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