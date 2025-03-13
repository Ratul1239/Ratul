#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    int n;
    cin >> n;
    // ll sum = 0;
    //  int x=n/9;
    //  int rem=n%9;
    //  int Nine_sum=(9*10)/2;
    //  int rem_sum=(rem*(rem+1))/2;
    //  ll ans=x*Nine_sum;
    //  ll ans1=ans+rem_sum;
    // cout<<ans1<<endl;
    //  cout<<x<<endl;
    //  cout<<rem<<endl;
    int x = n - 9;
    int y = x / 10;
    int ans = (10 * (10 + 1)) / 2;
    int rem = x % 10;
    int ans1 = (rem * (rem + 1)) / 2;
    if (n > 9)
    {
        if (y > 9)
        {
            ll ans2 = 45 + (ans*y) + ans1;
            cout << ans2 << endl;
        }
        else{
            cout<<45+ans1<<endl;
        }
    }
    else 
    {
        int ans3=(n*(n+1))/2;
        cout<<ans3<<endl;
    }
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