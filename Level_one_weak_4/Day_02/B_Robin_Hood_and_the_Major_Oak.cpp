#include<bits/stdc++.h>
using namespace std;
void solve()
{
    long long  n,k;
    cin>>n>>k;
    long long  born_leaves=(n*(n+1))/2;
    if(n>k)
    {
        long long old_leaves=((n - k) * (n - k + 1)) / 2;
        born_leaves-=old_leaves;
    }

    if(born_leaves%2==0)
    {
        cout<<"YES"<<endl;
    }
    else 
    {
        cout<<"NO"<<endl;
    }
    //cout<<born_leaves<<endl;
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