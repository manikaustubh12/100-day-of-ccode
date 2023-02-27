#include <iostream>
#include<bits/stdc++.h>
typedef long long km;
using namespace std;
void nonRepeat(string str){
    map<char,int> m;
    for(km i=0;i<str.length();i++){
        m[str[i]]++;
    }
    for(km i=0;i<str.length();i++){
        if(m[str[i]]==1) cout<<str[i]<<" ";
    }
}
int main() {
    // string=""
    string str; cin>>str;
    nonRepeat(str);
    return 0;
}
