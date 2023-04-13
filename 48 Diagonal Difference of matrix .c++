#include<bits/stdc++.h>
typedef long long km;
using namespace std;
int main(){
    km n; cin>>n;
     vector<vector<km>> v(n,vector<km>(n));
    for(km i=0;i<n;i++){
        for(km j=0;j<n;j++){
            cin>>v[i][j];
        }
    }
   km sum1=0,sum2=0;
    for(km i=0;i<n;i++){
        for(km j=0;j<n;j++){
            if(i==j){
                sum1+=v[i][j];
            }
            if((i+j)==(n-1)){
                sum2+=v[i][j];
            }
        }
    }
    cout<<abs(sum1-sum2);
    return 0;
}
