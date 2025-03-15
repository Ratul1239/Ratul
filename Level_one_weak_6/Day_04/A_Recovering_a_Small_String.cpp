#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        int z = n / 26;
        int rem = n % 26;
        if (n == 26)
        {
            // char letter = 'a' + (rem -2);
            cout << "aax" << endl;
        }
        else if (n == 52)
        {
            cout << "ayz" << endl;
        }
        else if (n == 27)
        {
            // char letter = 'a' + (rem -2);
            cout << "aay" << endl;
        }
        else if (z == 1)
        {
            char letter = 'a' + (rem - 2);
            cout << 'a' << letter << 'z' << endl;
        }
        else if (z == 2)
        {
            char letter = 'a' + (rem - 1);
            cout << letter << "zz" << endl;
        }
        else if (z == 3)
        {
            cout << "zzz" << endl;
        }
        else
        {
            char letter = 'a' + (rem - 3);
            cout << "aa" << letter << endl;
        }
    }
    return 0;
}