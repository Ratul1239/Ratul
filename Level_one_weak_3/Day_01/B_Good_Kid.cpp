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
    a[0]=a[0]+1;
    long long sum=a[0];
    for(int i=1;i<n;i++)
    {
        sum*=a[i];
    }
    cout<<sum<<endl;

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