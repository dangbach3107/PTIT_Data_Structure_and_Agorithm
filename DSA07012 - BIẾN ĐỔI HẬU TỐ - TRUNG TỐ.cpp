#include<bits/stdc++.h>
using namespace std;

void solve(){
	string s; cin >> s;
	stack <string> st;
	for(int i = 0; i< s.size(); i++){
		if('A' <= s[i] && 'Z' >= s[i]) st.push(string(1, s[i])); 
		else{
			string t1 = st.top(); st.pop();
			string t2 = st.top(); st.pop();
			st.push("(" + t2 +string(1, s[i]) + t1 + ")");
		}
	}
	while(st.size()){
		cout << st.top(); st.pop();
	}
}

int main() {
	int t; cin >> t;
	while (t--) {
		solve();
		cout << endl;
	}
}
