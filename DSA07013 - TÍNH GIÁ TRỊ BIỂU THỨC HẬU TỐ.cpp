#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		string s;cin >> s;
		stack <string> st;
		for(int i = 0; i < s.size(); i++){
			string tmp = string(1, s[i]);
			if(tmp == "*" || tmp == "/" || tmp == "+" || tmp == "-"){
				string x = st.top(); st.pop();
				string y = st.top(); st.pop();
				if(tmp == "*"){
					int res = stoi(x) * stoi(y);
					st.push(to_string(res));
				}
				else if(tmp == "/"){
					int res = stoi(y) / stoi(x);
					st.push(to_string(res));
				}
				else if(tmp == "-"){
					int res = stoi(y) - stoi(x);
					st.push(to_string(res));
				}
				else if(tmp == "+"){
					int res = stoi(x) + stoi(y);
					st.push(to_string(res));
				}
			}
			else st.push(tmp);
		}
		cout << st.top() << endl;
	}
}
