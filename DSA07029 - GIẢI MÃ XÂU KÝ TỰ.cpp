#include<bits/stdc++.h>
using namespace std;

void solve(){
	string s; cin >> s;
	stack <string> st;
 
	for(char x : s){
		string tmp(1, x);
		if(tmp != "]"){
			st.push(tmp);
		}
		else{
			string s1 = "", s2 = "";
			while(!st.empty() && st.top() != "["){
				s1 = st.top() + s1;
				st.pop();
			}
			st.pop();
			int k;
			string s3 = "";
			while(!st.empty() && isdigit(st.top()[0])){
				s3 = st.top() + s3;
				st.pop();
			}
			//cout << s3 << ' ';
			if(s3 == "") k = 1;
			else k = stoi(s3);
			while(k--){
				s2 += s1;
			}
			st.push(s2);
		}
	}
	string res = "";
    while (!st.empty()) {
        res = st.top() + res;
        st.pop();
    }
    cout << res;
}

int main() {
	int t; cin >> t;
	while (t--) {
		solve();
		cout << endl;
	}
}
