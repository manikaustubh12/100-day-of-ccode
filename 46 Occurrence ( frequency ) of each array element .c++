
#include <iostream>
#include<bits/stdc++.h>
typedef long long km;
using namespace std;
void occur(vector<km>& v){
    map<km,km> mp;
    for(km i=0;i<v.size();i++){
        mp[v[i]]++;
    }
    for(auto c:mp){
        cout<<"Element "<<c.first<<" occurs "<<c.second<<" times"<<'\n';
    }
    // cout<<'\n';
}
int main(void){
    km n; cin>>n;
    vector<km> v(n);
    for(km i=0;i<n;i++){
        cin>>v[i];
    }
    occur(v);
}
