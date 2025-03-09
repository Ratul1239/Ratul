#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    int n;cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int ans=0;
    for(auto valu:a)
    {
        int right_valu=abs(valu);
        ans+=right_valu;
       // if(valu)
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