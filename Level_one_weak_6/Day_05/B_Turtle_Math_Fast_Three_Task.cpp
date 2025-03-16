#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    if (sum % 3 == 0)
    {
        cout << 0 << endl;
        return;
    }
    for (int i = 0; i < n; i++)
    {
        int x = sum - a[i];
        if (x % 3 == 0)
        {
            cout << 1 << endl;
            return;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (sum % 3 != 0)
        {
            int y = sum % 3;
            if (y == 2)
            {
                cout << 1 << endl;
                break;
            }
            else
            {
                cout << 2 << endl;
                break;
            }
        }
    }
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