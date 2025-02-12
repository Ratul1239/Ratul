#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
     int t;
    cin>>t;
    while(t--)
    {
        int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    set<int> seen;
    int prefix_to_remove = 0;

    for (int i = n - 1; i >= 0; i--) {
        if (seen.count(a[i])) {
            break;
        }
        seen.insert(a[i]);
        prefix_to_remove++;
    }
    
    cout << n - prefix_to_remove << endl;
    }
    return 0;
}