#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    string s = "aeiou";
    string ans="";
    
     for (int i = 0; i < n; i++)
        {
            ans.push_back( s[i % 5]);
        }
        sort(ans.begin(),ans.end());
        for(auto valu:ans)
        {
            cout<<valu;
        }
        cout<<endl;
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