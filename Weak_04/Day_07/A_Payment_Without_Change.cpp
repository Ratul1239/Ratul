#include<bits/stdc++.h>
using namespace std;
void solve()
{
    long long int a,b,n,s;
    cin>>a>>b>>n>>s;
    long long int max_valu=min(a,s/n)*n;
    long long int remenig=s-max_valu;
    if(remenig<=b)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
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