#include<bits/stdc++.h>
typedef long long km;
using namespace std;
int todo(vector<km>& v){
    km n=v.size();
    km count=0;
    for(km i=0;i<n;i++){
        if(v[i]>=1000) count++;
        else continue;
    }
    return count;
}
int main() {
	// your code goes here
	km t; cin>>t;
	while(t--){
	    km n; cin>>n;
	    vector<km> v(n);
	    for(km i=0;i<n;i++){
	        cin>>v[i];
	    }
	    cout<<todo(v)<<'\n';
	}
	return 0;
}
