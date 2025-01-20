#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;cin>>n;
    deque<int>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    for(int i=0;i<n/2;i++)
    {
        if(a.size()==2)
        {
            a.pop_front();
        }
        else if(a.size()==1)
        {
            break;
        }
        else
        {
             a.pop_front();
             a.pop_back();
        }
    }
    //cout<<a.size()<<endl;
    for(auto valu:a)
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