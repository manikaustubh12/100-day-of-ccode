#include <iostream>
#include<bits/stdc++.h>
typedef long long km;
using namespace std;

int main() {
    km m=2,n=2;
    km res;
    vector<vector<km>> v(m,vector<km>(n));
    for(km i=0;i<m;i++){
        for(km j=0;j<n;j++){
            cin>>v[i][j];
        }
    }
    for(km i=0;i<m;i++){
        for(km j=0;j<n;j++){
            res=v[0][0]*v[1][1]-v[0][1]*v[1][0];
        }
    }
    cout<<res;
    return 0;
}
