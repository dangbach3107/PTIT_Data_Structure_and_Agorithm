#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

vector <int> adj[1005];
bool check[1005];
int u, n, m;
vector <pair<int, int>> v;

void dfsTree(int u){
	stack <int> st;
	st.push(u);

	while(!st.empty()){
		int tmp = st.top();
		check[tmp] = 1;
		st.pop();

		for(int x : adj[tmp]){
			//cout << 2222;
			if(!check[x] ){
				//cout << 1122;
				v.push_back({tmp, x});
				check[x] = 1;
				st.push(tmp);
				st.push(x);
				break;
			}
		}
		//cout << 3333;
	}
}

void solve(){
	cin >> n >> m >> u;
	for(int i = 1; i <= n; i++) adj[i].clear();
	memset(check, 0, sizeof check);
	v.clear();
	while(m--){
		int x, y; cin >> x >> y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	dfsTree(u);
	if(v.size() < n - 1) cout << -1 << endl;
	else{
		for(auto x : v){
			cout << x.first << " " << x.second << endl;
		}
	}
}


int main(){
	int t; cin >> t;
	while(t--){
		solve();
	}
}
