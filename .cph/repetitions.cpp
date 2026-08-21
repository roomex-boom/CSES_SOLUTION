#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string input;
    cin>>input;
    int res=1;
    int count=1;
    for(int i=1;i<input.size();i++){
     if(input[i]==input[i-1]){
        count++;
     }
     else{
        res=max(res,count);
        count=1;

     }
     res=max(count,res);
    }
    cout<<res;


}