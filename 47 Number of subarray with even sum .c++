#include <iostream>
#include<bits/stdc++.h>
typedef long long km;
using namespace std;
int subCount(vector<km>& v,km n){
    int res=0;
    for(km i=0;i<v.size();i++){
        km sum=0;
        for(km j=i;j<v.size();j++){
            sum+=v[j];
            if(sum%2==0) res++;
        }
    }
    return res;
}
int main(void) {
    km n; cin>>n;
    vector<km> v(n);
    for(km i=0;i<n;i++){
        cin>>v[i];
    }
    cout<<subCount(v,n)<<'\n';
}
