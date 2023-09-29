#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin>>n;
    int temp=n,fin=n;
    int c=0,z,ans=0;
	while(n!=0){
		c++;
		n/=10;
	}
	while(temp!=0){
		z=temp%10;
		ans+=pow(z,c);
		temp/=10;
	}
	if(fin==ans) cout<<"true";
	else cout<<"false";
}
