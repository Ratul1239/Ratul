#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int e=0,o=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]%2==1)
        {
            o++;
        }
    }
    if(o==0)
    {
        cout<<"YES"<<endl;
    }
    else if(o%2==0)
    {
        cout<<"YES"<<endl;
    }
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