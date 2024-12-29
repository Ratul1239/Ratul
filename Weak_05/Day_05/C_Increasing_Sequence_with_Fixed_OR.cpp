#include<bits/stdc++.h>
using namespace std;
void solve()
{
   long long int n;
    cin>>n;
    deque<long long int>v;
    for(int k=0;k<=__lg(n);k++)
    {
        if((n>>k)&1)
        {
            long long int valu=n-(1LL<<k);
            if(valu>0)
            {
                v.push_front(valu);
            }
        }
    }
    v.push_back(n);
    cout<<v.size()<<endl;
    for(auto x:v)
    {
        cout<<x<<" ";
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