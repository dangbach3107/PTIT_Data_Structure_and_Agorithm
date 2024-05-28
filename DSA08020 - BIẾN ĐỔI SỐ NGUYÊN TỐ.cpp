#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

bool sieve[10000] ;

void init(){
	sieve[0] = sieve[1] = 1;
	for(int i = 2; i * i <= 10000; i++){
		if(sieve[i] == 0){ 
			for(int j = i * i; j < 10000; j+= i){
				sieve[j] = 1;
			}
		}
	}
}

bool prime(int a){
	if(sieve[a] == 0) return 1;
	return 0;
}

void solve(){
	int a, b; cin >> a >> b;
	queue <pair<int, int>> q;
	map<int, int> m;

	m[a] = 1;
	q.push({a, 0});

	while(1){
		auto x  = q.front();
		q.pop();
		if(x.first == b){
			cout << x.second;
			return;
		}
		string s = to_string(x.first);
		for(int i = 0; i < 4; i++){
			for(int j = 0; j <= 9; j++){
				if(i == 0 && j == 0 || j == s[i] - '0'){
					continue;
				}
				string s1 = s;
				s1[i] = j + '0';
				int tmp = stoi(s1);
				if(prime(tmp) && !m[tmp]){
					q.push({tmp, x.second + 1});
					m[tmp] = 1;
				}
			}
		}
	}
}


int main(){

	init();
	int t; cin >> t;
	while(t--){
		solve();
		cout << endl;
	}
}
