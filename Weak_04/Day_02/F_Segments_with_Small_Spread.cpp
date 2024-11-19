#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    long long int k;
    cin >> n >> k;
    vector<long long int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    multiset<long long int> ml;
    int l = 0, r = 0;
    long long int ans = 0;
    while (r < n)
    {
        ml.insert(v[r]);
        long long int mn = *ml.begin();
        long long int mx = *ml.rbegin();
        if (mx - mn <= k)
        {
            ans += (r - l + 1);
        }
        else
        {
            while (l <= k)
            {
                long long int MN = *ml.begin();
                long long int MX = *ml.rbegin();
                if (MX - MN <= k)
                {
                    break;
                }
                ml.erase(ml.find(v[l]));
                l++;
            }
            long long int mn = *ml.begin();
            long long int mx = *ml.rbegin();
            if (mx - mn <= k)
            {
                ans += (r - l + 1);
            }
        }
        r++;
    }
    cout << ans << endl;
    return 0;
}