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
        string name = "Timur";
        int n;
        cin >> n;
        string s;
        cin >> s;

        if (n != name.size())
        {
            cout << "NO" << endl;
            continue;
        }

        sort(name.begin(), name.end());
        sort(s.begin(), s.end());

        if (name == s)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}