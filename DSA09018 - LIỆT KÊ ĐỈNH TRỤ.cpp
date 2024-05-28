#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

vector <int> adj[1005];
bool check[1005];
int lienThong, n, m;

void dfs(int u){
	check[u] = 1;
	for(auto x : adj[u]){
		if(!check[x]) dfs(x);
	}
}

bool checkk(int v){
	memset(check, 0, sizeof check);
	check[v] = 1;
	int dem = 0;
	for(int i = 1; i <= n; i++){
		if(!check[i]){
			dem++;
			dfs(i);
		}
	}
	return dem > lienThong;
}

void solve(){
	cin >> n >> m;
	for(int i = 1; i <= n; i++){
		adj[i].clear();
	}
	while(m--){
		int x, y;
		cin >> x >> y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	memset(check, 0, sizeof check);
	lienThong  = 0;
	for(int i = 1; i <= n; i++){
		if(!check[i]){
			lienThong++;
			dfs(i);
		}
	}
	for(int i = 1; i <= n; i++){
		if(checkk(i)) cout << i <<  ' ';
	}
	cout << endl;
}


int main(){
	int t; cin >> t;
	while(t--){
		solve();
		cout << endl;
	}
}
