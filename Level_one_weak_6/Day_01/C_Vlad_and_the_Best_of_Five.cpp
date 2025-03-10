#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    string s;
    cin>>s;
    int n=s.size();
    int a=0,b=0;
    for(auto cha:s)
    {
        if(cha=='A')
        {
            a++;
        }
        else b++;
    }
    if(a>b)
    {
        cout<<"A"<<endl;
    }
    else cout<<"B"<<endl;
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