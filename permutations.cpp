#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    if(t>1 && t<4){
        cout<<"NO SOLUTION";
    }
    else{
        for(int i=1;i<=t;i++){
            if(i%2==0){
                cout<<i<<" ";
            }
        }
        for(int i=1;i<=t;i++){
            if(i%2!=0){
                cout<<i<<" ";
            }
        }
    }
}