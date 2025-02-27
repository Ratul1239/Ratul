#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    if(3<n)
    {
        int ans1=n/4;
        int div_end=n%4;
        int ans2=div_end/2;
        cout<<ans1+ans2<<endl;
    }
    else 
    {
        int ans1=n/2;
        cout<<ans1<<endl;
    }

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