#include <bits/stdc++.h>
using namespace std;
 
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
 
    sort(a.begin(), a.end());
    int x=0;
    int ans=0;
    int idx=(n+1)/2;
    ans++;
    idx--;
    long long int  val=a[idx];
    val++;
    for(int i=idx+1; i<n; i++){
        if(a[i]<=val){
            x=(val-a[i]);
            ans+=x;
        } 
    }
 
    cout << ans << endl;
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