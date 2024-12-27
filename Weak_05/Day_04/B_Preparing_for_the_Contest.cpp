#include<bits/stdc++.h>
using namespace std;
void solve()
{
  
    int n, k;
    cin >> n >> k;
    vector<int>result;
    for(int i=1;i<=k;i++)
    {
        result.push_back(i);
    }
     for(int i=n;i>=k+1;i--)
    {
        result.push_back(i);
    }
    for(auto valu:result)
    {
        cout<<valu<<" ";
    }
    cout<<endl;
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