#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin>>n;
    set<int> st;
    for(int i=1;i<=sqrt(n);i++){
        if(n%i==0){
            st.insert(i);
            if(n/i!=i){
                st.insert(n/i);
            }
        }
    }
    for(auto c:st){
        cout<<c<<" ";
    }
}
