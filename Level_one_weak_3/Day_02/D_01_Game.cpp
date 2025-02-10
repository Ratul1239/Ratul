#include <bits/stdc++.h>
using namespace std;
void solve()
{
    string s;
    cin >> s;
    int zero = 0, one = 0;
    int n = s.size();
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0')
        {
            zero++;
        }
        else
        {
            one++;
        }
    }
    int ans=min(zero,one);
    if(ans%2==1)
    {
        cout<<"DA"<<endl;
    }
    else{
        cout<<"NET"<<endl;
    }
    //cout<<ans<<endl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;
    while (T--)
    {
        solve();
    }
    return 0;
}