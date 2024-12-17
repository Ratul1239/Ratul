#include <bits/stdc++.h>
using namespace std;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t;
   cin >> t;
   while (t--) {
      int n, XOR = 0;
      cin >> n;
      vector<int> a(n);
      vector<int>b;
      for (int i = 0;i < n;i++) {
         cin >> a[i];
         XOR ^= a[i];
      }

      int ans=0;
      for (int i = 0;i < n;i++) {
         int currXOR = (a[i]^XOR);
         b.push_back(currXOR);
      }
      for(int i=0;i<b.size();i++)
      {
        ans^=b[i];
        //cout<<b[i]<<" ";
      }
      //cout<<ans<<endl;
      if(ans==0)
      {
        cout<<XOR<<endl;
      }
      else cout<<"-1"<<endl;
   }
   return 0;
}