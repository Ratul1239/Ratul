#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int sum = accumulate(a.begin(), a.end(), 0);

    if (sum == 0) {
        cout << "NO" << endl;
        return;
    }

    if (sum > 0) {
        sort(a.rbegin(), a.rend()); 
    } else {
        sort(a.begin(), a.end()); 
    }

    cout << "YES" << endl;
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}
