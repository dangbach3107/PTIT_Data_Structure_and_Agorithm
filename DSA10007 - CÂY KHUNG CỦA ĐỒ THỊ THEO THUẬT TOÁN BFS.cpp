#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

vector <int> adj[1005];
bool check[1005];
int u, n, m;
vector <pair<int, int>> v;

void bfsTree(int u){
	queue <int> q;
	q.push(u);

	while(!q.empty()){
		int tmp = q.front();
		check[tmp] = 1;
		q.pop();

		for(int x : adj[tmp]){
			//cout << 2222;
			if(!check[x] ){
				//cout << 1111;
				v.push_back({tmp, x});
				check[x] = 1;
				q.push(x);
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
	bfsTree(u);
	// for(auto x : v){
	// 	cout << x.first << ' ' << x.second << endl;
	// }
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
