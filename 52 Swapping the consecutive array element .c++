// swapping the alternate number of array
#include<bits/stdc++.h>
typedef long long km;
using namespace std;
int main(){
	km n; cin>>n;
	vector<km> v(n);
	for(km i=0;i<n;i++){
		cin>>v[i];
	}
	for(km i=0;i<n-1;i+=2){
		swap(v[i],v[i+1]);
	}
	for(km i=0;i<n;i++){
		cout<<v[i]<<" ";
	}
	return 0;
}
