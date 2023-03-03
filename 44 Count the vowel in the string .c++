#include<bits/stdc++.h>
using namespace std;
int vow(string str){
    int z=str.length();
    int count=0;
    for(int i=0;i<z;i++){
        
        if(str[i]=='a') count++;
        else if(str[i]=='e') count++;
        else if(str[i]=='i') count++;
        else if(str[i]=='o') count++;
        else if(str[i]=='u') count++;
        else if(str[i]=='y') count++;
        else if(str[i]=='A') count++;
        else if(str[i]=='E') count++;
        else if(str[i]=='I') count++;
        else if(str[i]=='O') count++;
        else if(str[i]=='U') count++;
        else if(str[i]=='Y') count++;
        // else return;
    }
    return count;
}
int main(){
   // write your code here
   int t; cin>>t;
   while(t--){
       string str; cin>>str;
       cout<<vow(str)<<'\n';
   }
   return 0;
}
