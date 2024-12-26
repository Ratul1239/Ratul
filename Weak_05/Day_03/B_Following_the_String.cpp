#include <bits/stdc++.h>
using namespace std;
 
int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
 
   int t;
   cin >> t;
   while (t--) {
      int n;
      cin >> n;
      vector<int> a(n);
      for (int i = 0;i < n;i++) {
         cin >> a[i];
      }
 
      vector<int> cnt(26);
      string ans;
      for (int i = 0;i < n;i++) {
         int curr = a[i];
         for (int j = 0;j < 26;j++) {
            if (cnt[j] == a[i]) {
               ans += ('a' + j);
               cnt[j]++;
               break;
            }
         }
      }
 
      cout << ans << '\n';
   }
   return 0;
}