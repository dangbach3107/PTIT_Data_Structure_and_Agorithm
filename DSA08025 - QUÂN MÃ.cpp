#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

int dx[8] = {2, 2, -2, -2, 1, 1, -1, -1};
int dy[8] = {1, -1, 1, -1, 2, -2, 2, -2};

bool isValid(int x, int y){
	return x > 0 && x < 9 && y > 0 && y < 9;
} 

void solve(){
	string a, b; cin >> a >> b;
	int x1 = a[0] - 'a' + 1;
	int x2 = a[1] - '0';
	int y1 = b[0] - 'a' + 1;
	int y2 = b[1] - '0';
	queue <pair<pair<int,int>, int>> q;
	map<pair<int,int>, bool> m;

	q.push({{x1, x2}, 0});
	m[{x1, x2}] = 1;

	while(!q.empty()){
		auto x = q.front();
		q.pop();
		if(x.first.first == y1 && x.first.second == y2){
			cout << x.second ; return;
		}
		for(int i = 0 ; i < 8; i++){
			if(isValid(x.first.first + dx[i], x.first.second + dy[i]) && m[{x.first.first + dx[i], x.first.second + dy[i]}] == 0){
				q.push({{x.first.first + dx[i], x.first.second + dy[i]}, x.second + 1});
				m[{x.first.first + dx[i], x.first.second + dy[i]}] = 1;
			}
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
