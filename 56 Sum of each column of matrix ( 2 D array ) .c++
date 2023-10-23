#include <bits/stdc++.h>
typedef long long km;
using namespace std;

void sumOfCol(vector<vector<int>>& v,int r,int c){
// 	int sum=0;
	for(int i=0;i<c;i++){
	    int sum=0;
		for(int j=0;j<r;j++){
			sum+=v[j][i];
		}
		cout<<sum<<'\n';
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
	sumOfCol(v,r,c);
	return 0;
}
