#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    long long int k;
    cin>>k;
    vector<long long int >a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int l=0,r=0;
    long long int ans=0 ,sum=0;
    while(r<n)
    {
        sum+=a[r];
       while(sum>k)
       {
        sum-=a[l];
        l++;
       }
       ans+=(r-l+1);
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