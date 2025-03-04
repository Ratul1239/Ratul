#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, m;
    cin >> n >> m;
    string s, s1;
    cin >> s >> s1;
    int i = 0, j = 0;
    while (i < n && j < m)
    {
        if (s[i] == s1[j])
        {
            i++;
        }
        j++;
    }
    cout << i << endl;
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