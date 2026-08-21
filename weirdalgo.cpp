#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long t; cin >> t;
    cout<<t<<" ";
    while(t!=1){
        if(t%2==0){
            t=t/2;
            cout<<t<<" ";
        }
        else{
            t=3*t+1;
            cout<<t<<" ";
        }
    }
}