#include <iostream>
#include<bits/stdc++.h>
typedef long long km;
using namespace std;
km sod(km n){
    if(n<10) return n;
    else return (n%10)+sod(n/10);
}
int main(void) {
    km n; cin>>n;
    km z=sod(n);
    cout<<z;
}
