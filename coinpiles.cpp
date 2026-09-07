#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        long long first, second;
        cin >> first >> second;

        // If one pile is empty and the other is not then 
        if ((first == 0 && second > 0) || (first > 0 && second == 0)) {
            cout << "NO\n";
            continue;
        }
        int rem1 = first % 3;
        int rem2 = second % 3;
        // Sum must be divisible by 3
        bool divisible = (rem1 == 0 && rem2 == 0) ||(rem1 == 1 && rem2 == 2) ||  (rem1 == 2 && rem2 == 1);
        // Larger pile cannot be more than twice the smaller pile as for instance we keep providing one pile with 1 and other with 2 
        bool balanced = max(first, second) <= 2 * min(first, second);

        if (divisible && balanced) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}