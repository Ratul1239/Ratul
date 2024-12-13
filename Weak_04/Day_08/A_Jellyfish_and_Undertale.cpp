#include<bits/stdc++.h>
using namespace std;
void solve()
{
    long long int a,b,n,ans;
    cin>>a>>b>>n;
    vector<long long int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    ans=b;
    for(auto x:v)
    {
        if(x>=a)
        {
            ans+=a-1;
        }
        else 
        {
            ans+=x;
        }
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