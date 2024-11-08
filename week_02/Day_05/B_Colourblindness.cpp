#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        bool flage = true;
        vector<char> v(n);
        vector<char> v1(n);

        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> v1[i];
        }

        for (int i = 0; i < n; i++) {
            if (v[i] == 'B') {
                v[i] = 'G';
            }
            if (v1[i] == 'B') {
                v1[i] = 'G';
            }
        }
       

        for (int i = 0; i < n; i++) {
            if (v[i] != v1[i]) {
                flage = false;
                break; 
            }
        }

        if (flage) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
