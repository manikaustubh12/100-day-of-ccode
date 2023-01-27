#include <iostream>
#include<bits/stdc++.h>
typedef long long km;
using namespace std;

int main() {
    int t; cin>>t;
    while(t--){
        string str; cin>>str;
        km count=0;
        string str1="314159265358979323846264338327";
        km z=str1.length();
        for(km i=0;i<30;i++){
            if(str[i]!=str1[i]) break;
            count++;
        }
        cout<<count<<'\n';
    }
    return 0;
    }
