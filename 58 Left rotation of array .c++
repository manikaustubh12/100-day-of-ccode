#include <bits/stdc++.h>
typedef long long km;
using namespace std;

int main() {
    km n; cin>>n;
    km k; cin>>k;
    vector<km> v(n);
    vector<km> v1(n);
    for(km i=0;i<n;i++){
        cin>>v[i];
    }
    for(km i=0;i<n;i++){
        v1[(i-k+n)%n]=v[i];
    }
    for(km i=0;i<n;i++){
        cout<<v1[i]<<" ";
    }
    return 0;
}
