#include <bits/stdc++.h>
using namespace std;
void ArrayChallenge(vector<int>& v)
{
    int mx=INT_MIN;
    int sum=0,ans;
    int n=v.size();
    for(int i=0;i<n;i++){
        if(v[i]>mx){
            mx=v[i];
        }
        sum+=v[i];
        ans=sum-mx;
    }
    if(ans<mx){
        cout<<"false";
    }
    else{
        cout<<"true";
    }
}
int main()
{
    int n;
    vector<int> v;
    while(cin>>n) {
        v.push_back(n);
    }
    ArrayChallenge(v);
	return 0;
}


