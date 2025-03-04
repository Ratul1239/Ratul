#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        if (n <= 2)
        {
            cout << "0" << endl;
            continue;
        }

        sort(v.begin(), v.end());
        
        int a = v[n-1] - v[2];
        int b = v[n-3] - v[0];
        int c = v[n-2] - v[1];
        cout << min({a, b, c}) << endl;
    }
    return 0;
}
