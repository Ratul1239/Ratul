#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    vector<int> v(n), v1(m), ans;

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> v1[i];
    }

    int l = 0, r = 0;
    while (l < n && r < m)
    {
        if (v[l] <= v1[r])
        {
            ans.push_back(v[l]);
            l++;
        }
        else
        {
            ans.push_back(v1[r]);
            r++;
        }
    }

    while (l < n)
    {
        ans.push_back(v[l]);
        l++;
    }
    while (r < m)
    {
        ans.push_back(v1[r]);
        r++;
    }

    for (int i = 0; i < n + m; i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}
