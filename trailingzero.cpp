#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long  num; cin >> num;
   long long count=0;
   while(num!=0){
    count+=num/5;
    num=num/5;
   }
   cout<<count;
}