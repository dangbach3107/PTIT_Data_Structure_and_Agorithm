#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

vector <int> adj[1005];
bool check[1005];
int ok, n, m;

void bfs(int u){
	queue <pair<int,int>> q;
	q.push({u, 0});
	check[u] = 1;

	while(!q.empty()){
		int tmp1 = q.front().first;
		int tmp2 = q.front().second;
		q.pop();

		for(int v : adj[tmp1]){
			if(check[v] && v != tmp2){
				ok = 1;
				return;
			}
			if(!check[v]){
				check[v] = 1;
				q.push({v, tmp1});
			}
		}
	}
}

void solve(){
	cin >> n >> m;
	for(int i = 1; i <= n; i++){
		adj[i].clear();
	}
	memset (check, 0, sizeof check);
	ok = 0;
	while(m--){
		int x, y;
		cin >> x >> y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	for(int i = 1; i <= n; i++){
		memset (check, 0, sizeof check);
		bfs(i);
		if(ok){
			break;
		}
	}
	if(!ok) cout << "NO";
	else cout << "YES";
}


int main(){
	int t; cin >> t;
	while(t--){
		solve();
		cout << endl;
	}
}
