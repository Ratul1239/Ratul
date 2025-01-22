#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,k;cin>>n>>k;
    vector<int>a(k);
    for(int i=0;i<k;i++)
    {
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    int last=0;
    int one=0;
    a.pop_back();
    
    for(auto valu:a)
    {
        if(valu>1)
        {
            last+=(valu*2)-1;
        }
        else
        {
            one+=valu;
        } 
    }
    cout<<last+one<<endl;

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