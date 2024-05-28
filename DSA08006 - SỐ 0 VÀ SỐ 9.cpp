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
		q.push("9");
		while(!q.empty()){
			string tmp = q.front();
			q.pop();
			int tmp2 = stoi(tmp);
			if(tmp2 % n == 0) {
				cout << tmp << endl;
				break;
			}
			q.push(tmp + "0");
			q.push(tmp + "9");
		}
	}
}
