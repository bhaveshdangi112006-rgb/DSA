#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	set<int> st;
	cout<<"the divisors are"<<endl;
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            st.insert(i);
            if(n/i!=i){
           st.insert(n/i);
            }
        }
    }
      for(auto x: st){
            cout<<x<<" ";
        }
}
