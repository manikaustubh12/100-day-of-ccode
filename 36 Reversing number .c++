#include<bits/stdc++.h>
// #include<iostream.h>
typedef long long km;
using namespace std;
int rev(km z){
    km rev=0,x,c;
    while(z!=0){
        x=z%10;
        rev=rev*10+x;
        z=z/10;
    }
    return rev;
}
int main(){
    km t; cin>>t;
    while(t--){
        km n; cin>>n;
        cout<<rev(n)<<'\n';
    }
    return 0;
}
