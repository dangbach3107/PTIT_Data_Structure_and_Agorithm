#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

void solve(){
	int k; cin >> k;
	string s; cin >> s;
	map <char, int> m;
	for(auto x :s) m[x]++;
	priority_queue<int, vector<int>> q;
	for(auto x : m){
		q.push(x.second);
	}
	while(k--){
		if(!q.empty()){
		    int tmp = q.top();
		    q.pop();
		    
		if(tmp > 1){
			q.push(tmp - 1);
		}
		}
	}
	long long res = 0;
	while(!q.empty()){
		res += 1ll*q.top() * q.top();
		q.pop();
	}
	cout << res;
}


int main(){
	int t; cin >> t;
	while(t--){
		solve();
		cout << endl;
	}
}
