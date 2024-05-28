#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

int priority(char c){
	if(c == '^') return 3;
	if(c == '*' || c == '/') return 2;
	if(c == '+' || c == '-') return 1;
	return 0;
}

int main(){
	int t; cin >> t;
	while(t--){
		queue <string> q;
		int n; cin >> n;
		vector <string> res;
		q.push("6");
		q.push("8");
		while(!q.empty()){
			string tmp = q.front();
			q.pop();
			res.push_back(tmp);
			if(tmp.size() < n){
				q.push(tmp + "6");
				q.push(tmp + "8");
			}
		}
		reverse(res.begin(), res.end());
		cout << res.size() << endl;
		for(auto x : res) cout << x << ' ';
		cout << endl;
	}
}
