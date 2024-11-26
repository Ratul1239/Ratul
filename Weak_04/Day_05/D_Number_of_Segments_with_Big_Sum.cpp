#include<bits/stdc++.h>
using namespace std;
void solve()
{
    long long int n,k;
    cin>>n>>k;
    vector<long long int >v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    int l=0,r=0;
    long long int ans=0,sum=0;
    while(r<n)
    {
        sum+=v[r];
        while(sum>=k)
        {
            ans+=(n-r);
            sum-=v[l];
            l++;
        }
        r++;
    }
    cout<<ans<<endl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}