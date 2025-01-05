#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long int n,ans=INT_MAX; cin >> n;
    vector<long long int>a(n);
    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    ans=min(ans,abs(a[0]-a[1]));
    ans=min(ans,abs(a[n-2]-a[n-1]));

    for(int i=1; i<n-1; i++)
    {
        ans=min(ans,max(abs(a[i]-a[i-1]),abs(a[i]-a[i+1])));
    }
    cout << ans <<endl;
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