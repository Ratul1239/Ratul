#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    bool ans = true;
    for (int i = 0; i < n; i++)
    {
        // if (a[i] - b[i] == 1)
        // {
        //     cout << "NO" << endl;
        //     break;
        // }
        // else
        
            // if (a[i] - b[i] == -1 || a[i] - b[i] == 0 || b[i] - a[i] == 1)
            // {
            //     ans++;
            // }
            if(a[i]==b[i])
            {
                continue;
            }
            else if(a[i]+1==b[i])
            {
                continue;
            }
            else{
                //cout<<"NO"<<endl;
                ans=false;
            }
        
    }
    if (ans)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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