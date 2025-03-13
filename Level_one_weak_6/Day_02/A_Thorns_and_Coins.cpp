#include <iostream>
using namespace std;

typedef long long ll;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    int cnt = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == '@') {
            cnt++;
        }
        if (s[i]=='*'&& s[i + 1] == '*') {
            break; 
        }
    }
    cout << cnt << endl;
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
