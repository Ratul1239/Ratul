#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin>>n;
    string v;
    cin >> v;
    int zero_groups = 0, one_groups = 0;
    char prev = v[0];
    if (prev == '0') zero_groups++;
    else one_groups++;

    for (int i = 1; i < n; i++) {
        if (v[i] != prev) { 
            if (v[i] == '0') zero_groups++;
            else one_groups++;
            prev = v[i];
        }
    }

   
    cout << min(zero_groups, one_groups) << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
