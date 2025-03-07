#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve() {
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (ll i = 0;i < n;i++) {
        cin >> a[i];
    }

    for (ll i = 1;i < n - 1;i++) {
        ll x = a[i - 1], y = (a[i - 1] * 2LL);
        a[i - 1] -= x;
        a[i] -= y;
        a[i + 1] -= x;
        if ((a[i] < 0) || (a[i + 1] < 0)) {
            cout << "NO" << '\n';
            return;
        }
    }

    bool ok = true;
    for (ll i = 0;i < n;i++) {
        if (a[i] != 0) {
            ok = false;
            break;
        }
    }

    if (ok) {
        cout << "YES" << '\n';
    }
    else {
        cout << "NO" << '\n';
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    t = 1;
    cin >> t;

    for (ll cs = 1; cs <= t; cs++)
    {
        // cout << "Case #" << cs << ": ";
        solve();
    }
    return 0;
}