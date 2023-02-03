#include <iostream>
#include<bits/stdc++.h>
typedef long long km;
using namespace std;

int main() {
    km t; 
    cin>>t;
    for(km i=0;i<t;i++)
    {
        km n; 
        cin>>n;
        string str; 
        cin>>str;
        km x=0,y=0;
        for(km i=0;i<str.length();i++){
            if(str[i]=='U') y=y+1;
            if(str[i]=='R') x=x+1;
            if(str[i]=='D') y=y-1;
            if(str[i]=='L') x=x-1;
            if(x==1&&y==1) break;
        }
        if(x==1 && y==1) 
            cout<<"YES"<<endl;
        else 
            cout<<"NO"<<endl;
    }
    return 0;
}
