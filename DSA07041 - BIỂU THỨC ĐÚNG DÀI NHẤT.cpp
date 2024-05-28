#include<bits/stdc++.h>
using namespace std;

void solve(){
	string s; cin >> s;
	int dem = 0;
	stack <int> st;
	for(auto x : s){
		if(x == '(') st.push(x);
		else{
			if(!st.empty()){
				dem+= 2;
				st.pop();
			}
		}
	}
	cout << dem ;
}

int main() {
	int t; cin >> t;
	while (t--) {
		solve();
		cout << endl;
	}
}
