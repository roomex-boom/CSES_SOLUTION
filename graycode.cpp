#include <bits/stdc++.h>
using namespace std;

vector<string>graycode(int n){
    if(n==1)return {"0","1"};
    vector<string>gc_1=graycode(n-1);

    vector<string>res;
    vector<string>mirrored;
    
    //mirror nikal lenge 

    for(int i=gc_1.size()-1;i>=0;i--){
             mirrored.push_back(gc_1[i]);
    }
    // attach krenge 0s to original and 1s to mirrored one
    for(int i=0;i<gc_1.size();i++){
        res.push_back({"0"+gc_1[i]});

    }
    for(int i=0;i<mirrored.size();i++){
        res.push_back({"1"+mirrored[i]});
    }
    return res;

}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;
    vector<string>ans=graycode(n);
    for(auto x:ans){
        cout<<x<<"\n";
    }
   
}