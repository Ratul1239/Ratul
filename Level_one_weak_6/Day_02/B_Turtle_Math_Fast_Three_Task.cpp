#include <iostream>
#include <vector>
using namespace std;

int minMovesToMakeSumDivisibleBy3(vector<int>& a) {
    int sum = 0, count1 = 0, count2 = 0;

    for (int num : a) {
        sum += num;
        if (num % 3 == 1) count1++;
        else if (num % 3 == 2) count2++;
    }

    int remainder = sum % 3;
    
    if (remainder == 0) return 0; // Already divisible by 3
    if (remainder == 1) {
        if (count1 > 0) return 1; // Remove one element with remainder 1
        if (count2 >= 2) return 2; // Remove two elements with remainder 2
    }
    if (remainder == 2) {
        if (count2 > 0) return 1; // Remove one element with remainder 2
        if (count1 >= 2) return 2; // Remove two elements with remainder 1
    }
    
    return -1; // This case should never occur
}

int main() {
    int t;cin>>t;
    while(t--)
    {
        int n;
    cin >> n;
    vector<int> a(n);
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    cout << minMovesToMakeSumDivisibleBy3(a) << endl;
    
    }
    return 0;
}
