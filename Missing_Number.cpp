#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long t; cin >> t;
    long long og=t;
    long long sum=0;
    while(--t){
    int i;
    cin>>i;
     sum+=i;
    }
    long long og_sum=((og+1)*og)/2;
    cout<<og_sum - sum;
}