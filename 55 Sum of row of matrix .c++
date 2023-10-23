#include <bits/stdc++.h>
typedef long long km;
using namespace std;

void sumOfRow(vector<vector<int> >& v,int r){
// 	int sum=0;
	for(int i=0;i<r;i++){
	    int sum=0;
		for(int j=0;j<r;j++){
			sum+=v[i][j];
		}
		cout<<sum<<'\n';
	}
}

int main() {
	// your code goes here
	int n; cin>>n;
	vector<vector<int>> v(n,vector<int>(n));
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>v[i][j];
		}
	}
	sumOfRow(v,n);
	return 0;
}
