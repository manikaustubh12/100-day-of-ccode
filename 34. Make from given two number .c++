#include<bits/stdc++.h>
typedef long long km;
using namespace std;
int findAP(km a,km tn){
    km d=(tn-a)/2;
    if((tn-a)%2!=0) return -1;
    // else 
    else return (a+d);
}
int main() {
	// your code goes here
	km t; cin>>t;
	while(t--){
	    km z,x; cin>>z>>x;
	    cout<<findAP(z,x)<<'\n';
	    
	}
	return 0;
}
