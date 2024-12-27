#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    string a,b,c;
    cin>>a>>b>>c;
    bool flag=false;
    for(int i=0;i<n;i++)
    {
        if(c[i]!=b[i]&&c[i]!=a[i])
        {
            flag=true;
            break;

        }
    }
    if(flag)cout<<"YES"<<endl;
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