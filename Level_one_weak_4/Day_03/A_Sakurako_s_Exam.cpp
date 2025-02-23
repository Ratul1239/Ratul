#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int a,b;
    cin>>a>>b;
    if(a==0&&b==1||a==1&&b==0)
    {
        cout<<"NO"<<endl;
    }
    else if(a==0&&b%2==1||b==0&&b%2==1)
    {
        cout<<"NO"<<endl;
    }
    else if(a%2==1&&b%2==1)
    {
        cout<<"NO"<<endl;
    }
    else if(a%2==1&&b%2==0)
    {
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
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