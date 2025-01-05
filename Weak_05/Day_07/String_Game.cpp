#include <bits/stdc++.h>
using namespace std;
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
        string s;
        cin >> s;
        int one = 0, zero = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                one++;
            }
            else
            {
                zero++;
            }
        }
        int minl=min(one,zero);
        if(minl%2==0)
        {
            cout<<"Ramos"<<endl;
        }
        else cout<<"Zlatan"<<endl;
    }
    return 0;
}