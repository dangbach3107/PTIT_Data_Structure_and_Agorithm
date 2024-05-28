#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n; cin >> n; 
	int a[n + 1], l[n + 1], r[n + 1];
	//cout << 12321;
	for(int i = 1; i <= n; i++) cin >> a[i];
	//cout << 12321;
	stack <int> st;

	for(int i = 1; i <= n ;i++){
		while(!st.empty() && a[st.top()] >= a[i]){
			st.pop();
		}
		if(st.empty()) l[i] = 1;
		else l[i] = st.top() + 1;
		st.push(i);
	}
	while (!st.empty()) st.pop();

	for(int i = n; i >= 1; i--){
		while(!st.empty() && a[st.top()] >= a[i]){
			st.pop();
		}
		if(st.empty()) r[i] = n;
		else r[i] = st.top() - 1;
		st.push(i);	
	}

	long long res = 0;
	for(int i = 1; i <= n; i++){
		long long s = 1ll * a[i] * (r[i] - l[i] + 1);
		res = max(res, s);
	}
	cout << res;
}

int main() {
	int t; cin >> t;
	while (t--) {
		solve();
		cout << endl;
	}
}
