#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    vector<int>x(4),y(4);
    for(int i=0;i<4;i++)
    {
        cin>>x[i]>>y[i];
    }
    int minx=*min_element(x.begin(),x.end());
    int maxx=*max_element(x.begin(),x.end());
    int miny=*min_element(y.begin(),y.end());
    int maxy=*max_element(y.begin(),y.end());
    int side=maxx-minx;
    cout<<side*side<<endl;
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