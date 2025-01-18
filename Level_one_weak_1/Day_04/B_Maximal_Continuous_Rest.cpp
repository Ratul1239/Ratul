#include <bits/stdc++.h>
using namespace std;

int maxRestHours(vector<int>& a) {
    int n = a.size();
    int max_streak = 0, current_streak = 0;

    for (int i = 0; i < n; i++) {
        if (a[i] == 1) {
            current_streak++;
            max_streak = max(max_streak, current_streak);
        } else {
            current_streak = 0;
        }
    }

    if (a[0] == 1 && a[n-1] == 1) {
        int left_streak = 0, right_streak = 0, i = 0;

        for (i = n-1; i >= 0 && a[i] == 1; i--) 
            right_streak++;

        for (i = 0; i < n && a[i] == 1; i++) 
            left_streak++;

        max_streak = max(max_streak, left_streak + right_streak);
    }

    return max_streak;
}

int main() {
    int n;
    cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; i++) 
        cin >> a[i];

    cout << maxRestHours(a) << endl;
    return 0;
}
