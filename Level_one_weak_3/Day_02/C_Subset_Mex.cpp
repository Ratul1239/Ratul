#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> freq(101, 0);
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        freq[x]++;
    }

    int mex_a = 0, mex_b = 0;

    while (freq[mex_a] > 0)
        mex_a++;

    while (freq[mex_b] > 1)
        mex_b++;

    cout << (mex_a + mex_b) << endl;
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
