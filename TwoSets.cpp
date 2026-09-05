#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long t;
    cin >> t;

    // Calculate sum safely using long long
    long long sum = t * (t + 1LL) / 2;

    if (sum % 2 != 0) {
        cout << "NO\n";
        return 0;
    }

    cout << "YES\n";

    long long target = sum / 2;

    vector<long long> st1, st2;

    for (long long i = t; i >= 1; i--) {
        if (i <= target) {
            st1.push_back(i);
            target -= i;
        } else {
            st2.push_back(i);
        }
    }

    cout << st1.size() << '\n';

    for (long long x : st1) {
        cout << x << ' ';
    }

    cout << '\n';

    cout << st2.size() << '\n';

    for (long long x : st2) {
        cout << x << ' ';
    }

    cout << '\n';

    return 0;
}