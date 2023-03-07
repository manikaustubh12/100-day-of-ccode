#include <iostream>
#include<bits/stdc++.h>
typedef long long km;
using namespace std;
string dec2Bin(km n){
    string ans="";
    if(n==0) return "0";
    while(n>0){
        km z=n%2;
        ans+=to_string(z);
        n/=2;
    }
    reverse(ans.begin(),ans.end());
    return ans;
}
int main() {
    km t; cin>>t;
    while(t--){
    km n; cin>>n;
    cout<<dec2Bin(n)<<'\n';}
    return 0;
}
