#include<bits/stdc++.h>
typedef long long km;
using namespace std;
void strand(string str,km n){
    vector<char> v;
    for(km i=0;i<n;i++){
        if(str[i]=='A'){
            v.push_back('T');
        }
        else if(str[i]=='T'){
            v.push_back('A');

        }
        else if(str[i]=='C'){
            v.push_back('G');

        }else{
            v.push_back('C');
        }
    }
    for(km i=0;i<v.size();i++){
        cout<<v[i];
    }
    cout<<'\n';
}
int main() {
	// your code goes here
	km t; cin>>t;
	while(t--){
	    km n; cin>>n;
	    string str; cin>>str;
	    strand(str,n);
	}
	return 0;
}
