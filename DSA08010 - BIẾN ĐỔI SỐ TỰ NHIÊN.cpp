#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

void solve(){
	int n; cin >> n;
    queue <pair<int, int>> q; 
    q.push({n, 0});
	map <int, int> m;
	m[n] = 1;

    while(1){
        auto x = q.front();
        q.pop();
        if(x.first == 1){
            cout << x.second;
            break;
        } 
        if(m[x.first - 1] == 0){
			 q.push({x.first - 1, x.second + 1});
			m[x.first - 1] = 1;
		}
		for(int i = 2; i <= sqrt(x.first); i++){
			if(x.first % i == 0 && m[x.first / i] == 0){
				q.push({x.first / i, x.second + 1});
				m[x.first / i] = 1;
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
