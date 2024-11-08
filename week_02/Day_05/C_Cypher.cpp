#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t; // Number of test cases

    while (t--) {
        int n;
        cin >> n; // Number of wheels

        vector<int> final_digits(n);
        for (int i = 0; i < n; i++) {
            cin >> final_digits[i];
        }

        vector<int> original_digits(n);
        for (int i = 0; i < n; i++) {
            int moves_count;
            string moves;
            cin >> moves_count >> moves;

            int current_digit = final_digits[i];
            for (char move : moves) {
                if (move == 'U') {
                    current_digit = (current_digit - 1 + 10) % 10;
                } else if (move == 'D') {
                    current_digit = (current_digit + 1) % 10;
                }
            }
            original_digits[i] = current_digit;
        }

        for (int i = 0; i < n; i++) {
            cout << original_digits[i] << " ";
        }
        cout << "\n";
    }

    return 0;
}
