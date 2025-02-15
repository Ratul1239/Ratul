#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,m;
    cin>>n>>m;
    if(n%2==0&&m%2==0||n%2==1&&m%2==1)
    {
        if(n>=m)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    }
    else cout<<"No"<<endl;
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