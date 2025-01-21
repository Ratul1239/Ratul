#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, s, m;
    cin >> n >> s >> m;
    vector<pair<int, int>> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].first >> a[i].second;
    }
    sort(a.begin(), a.end());
    // bool ok=false;
    if ( a[0].first >= s)
    {
        cout << "YES" << endl;
        return;
    }
    for (int i = 0; i < n-1; i++)
    {
        if (a[i + 1].first - a[i].second >= s)
        {
            cout << "YES" << endl;
            return;
        }
    }
    if (m - a.back().second >= s)
    {
        cout << "YES" << endl;
        return;
    }
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