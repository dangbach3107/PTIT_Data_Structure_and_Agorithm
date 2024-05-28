#include<bits/stdc++.h>
using namespace std;
long long f[100];
void prepare(){
	f[1] = f[2] = 1;
	for(int i = 3; i <= 93; i ++) f[i] = f[i - 1] + f[ i - 2];
}

void solve(){
	long long n, k; cin >>n>> k;
	
	while(1){
		if(n == 1 || n == 2){
			if(n== 1) cout << 0;
			else cout << 1;
			return;
		}
		if(k <= f[n - 2]){
			n -= 2;
		}
		else{
			k -= f[n - 2];
			n -= 1;
		}
	}
}

int main() {
	prepare();
	int t; cin >> t;
	while (t--) {
		solve();
		cout << endl;
	}
}
