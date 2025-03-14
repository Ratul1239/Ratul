#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    int n;cin>>n;
    vector<int>a(n);
    ll sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    int target=sum/n;
    ll p_sum=0;
    ll r_sum=0;
    bool yes=true;
    for(int i=0;i<n;i++)
    {
        p_sum+=a[i];
        r_sum=(i+1)*target;
        if(p_sum<r_sum)
        {
            yes=false;
        }

    }
    if(yes)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
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