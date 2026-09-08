#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string i;
    cin>>i;

    string input="";
    for(int k=0;k<i.length();k++){
        input+=tolower(i[k]);
    }

    vector<int>container(26,0);
    for(int i=0;i<input.size();i++){
        container[input[i]-'a']++;
    }
    string ans="";

    if(input.size()%2==0){
        
        for(int i=0;i<26;i++){
            if(container[i]%2!=0){
                cout<<"NO SOLUTION";
                return 0;

            }
        }
        // building left half

        for(int i=0;i<container.size();i++){
            if(container[i]>0){
                int len=container[i]/2;
                ans += string(len, char('a' + i));
            }
        }
        // building right half
        string temp=ans;
        reverse(temp.begin(),temp.end());
        ans+=temp;
       
    }
    else{
        int oddcount=0;
        string middle="";
        for(int i=0;i<26;i++){
            if(container[i]%2!=0){
                oddcount++;
                if(oddcount>1){
                    cout<<"NO SOLUTION";
                    return 0;

                }
         middle = string(container[i], char('a' + i));
            }
            

    
        }

        for(int i=0;i<26;i++){
            if(container[i]>0 && container[i]%2==0){
                int len =container[i]/2;
                ans += string(len, char('a' + i));
            }

        }
        string temp=ans;
    reverse(temp.begin(),temp.end());
    ans=ans+middle+temp;
    
    }
   string res="";
   for(int i=0;i<ans.length();i++){
    res+=toupper(ans[i]);
   }
   cout<<res;
}
    













    
