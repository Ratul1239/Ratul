#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, f, k;
    cin >> n >> f >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int faverate = v[f - 1];
    bool maby = false;
    bool no = false;
    sort(v.rbegin(), v.rend());
    for (int i = 0; i < k; i++)
    {
        if (v[i] == faverate)
        {
            no = true;
        }
    }
    if (!no)
    {
        cout << "NO" << endl;
        return;
    }
    for (int i = k; i < n; i++)
    {
        if (v[i] == faverate)
        {
            cout << "MAYBE" << endl;
            return;
        }
    }
    cout << "YES" << endl;
   
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