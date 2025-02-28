#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;
    string a;
    cin >> a;

    unordered_map<char, int> freq;

    for (char c : a)
    {
        freq[c]++;
    }

    int needed = 0;

    for (char level = 'A'; level <= 'G'; level++)
    {
        if (freq[level] < m)
        {
            needed += (m - freq[level]);
        }
    }

    cout << needed << endl;
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
