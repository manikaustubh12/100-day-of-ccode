#include<bits/stdc++.h>
typedef long long km;
using namespace std;

int main(){
   // write your code here
   km t; cin>>t;
   while(t--){
       string str; cin>>str;
       km n=str.length();
       for(km i=0;i<n;i++){
           if(str[i]>='A'&&str[i]<='Z'){
               str[i]='a'+(str[i]-'A');
           }else if(str[i]>='a'&&str[i]<='z'){
               str[i]='A'+(str[i]-'a');
           }
       }
        cout<<str<<'\n';
   }
    return 0;
}
