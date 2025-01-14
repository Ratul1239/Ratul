#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;cin>>n;
    string a;
    cin>>a;
    int sum=0,bi=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]=='+')
        {
            sum++;
        }
        else
        {
            bi++;
        }
    }
    cout<<abs(sum-bi)<<endl;
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