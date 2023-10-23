#include <bits/stdc++.h>
typedef long long km;
using namespace std;

void transpose(vector<vector<int>>& v,int r,int c){
	for(int i=0;i<c;i++){
		for(int j=0;j<r;j++){
			cout<<v[j][i]<<" ";
		}
		cout<<'\n';
	}
}
int main() {
	// your code goes here
	int r,c; cin>>r>>c;
	vector<vector<int>> v(r,vector<int>(c));
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cin>>v[i][j];
		}
	}
	transpose(v,r,c);
	return 0;
}
