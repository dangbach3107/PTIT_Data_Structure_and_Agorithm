#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

void solve(){
	int s, t; cin >> s >> t;
	queue<pair<int, int>> q; 
	set <int> check;

	q.push({s, 0});
	check.insert(s);

	while(!q.empty()){
		auto x = q.front(); q.pop();
		if(x.first == t){
			cout << x.second;
			return;
		}
		if(x.first < t && check.find(x.first * 2) == check.end()){
			q.push({x.first * 2, x.second + 1});
			check.insert(x.first * 2);
		}
		if(x.first - 1 >= 0 && check.find(x.first - 1) == check.end()){
			q.push({x.first - 1, x.second + 1});
			check.insert(x.first  - 1);
		}
	}
}


int main(){
	int t; cin >> t;
	while(t--){
		solve();
		cout << endl;
	}
}
