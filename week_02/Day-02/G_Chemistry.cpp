#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
     int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        vector<int> freq(26, 0);
        for (char c : s) {
            freq[c - 'a']++;
        }

        int odd_count = 0;
        for (int count : freq) {
            if (count % 2 != 0) {
                odd_count++;
            }
        }

        int remaining_length = n - k;
        bool possible = false;

        if (remaining_length % 2 == 0) {
            possible = (odd_count == 0 || odd_count <= k);
        } else {
            possible = (odd_count == 1 || odd_count <= k + 1);
        }

        if(possible)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
