#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    const long long MOD = 1000000007;

    int num; cin >> num;

    long long ans = 1;  
     for (long long i = 0; i < num; i++) {
    ans = (ans * 2) % MOD;
}
cout<<ans;

    }
