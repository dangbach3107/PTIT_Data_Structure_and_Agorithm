#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

int main(){
	int t; cin >> t; 
	while(t--){
		string s;cin >> s;
		stack <string> st;
		for(int i = s.size() - 1; i >= 0; i--){
			string tmp = string(1, s[i]);
			if(tmp == "*" || tmp == "/" || tmp == "+" || tmp == "-"){
				string x = st.top(); st.pop();
				string y = st.top(); st.pop();
				int res;
                if(tmp == "*"){
                    res = stoi(x) * stoi(y);
                }
                else if(tmp == "/"){
                    res = stoi(x) / stoi(y);
                }
                else if(tmp == "-"){
                    res = stoi(x) - stoi(y);
                }
                else if(tmp == "+"){
                    res = stoi(x) + stoi(y);
                }
                st.push(to_string(res));
			}
			else st.push(tmp);
		}
		cout << st.top() << endl;
	}
}
