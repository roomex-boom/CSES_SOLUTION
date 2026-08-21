#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    vector<int>arr;
    while(t--){
        int ele;
        cin>>ele;
        arr.push_back(ele);
        
    }
    long long res=0;
    
    for(int i=1;i<arr.size();i++){

         if(arr[i]<arr[i-1]){
           res+=arr[i-1]-arr[i];
           arr[i]=arr[i-1];
         }
    }
    cout<<res;
}