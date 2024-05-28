#include <bits/stdc++.h>
#define f0(i, a) for(int i = 0; i < a; i++)
#define f1(i, a) for(int i = 1; i <= a; i++)
#define read freopen("input.txt", "r", stdin); freopen ("output.txt", "w", stdout);
using namespace std;

bool cmp(int a, int b){
	return abs(a) < abs(b);
}

void solve(){
    int n; cin >> n;
    vector<int> v(n), r;
    int ans = 1e6;
    for(auto &x : v) cin >> x;
	for(int i = 0; i < n ; i++){
		for(int j = i + 1; j < n; j++){
			if(abs(ans)  >abs(v[i] + v[j])) ans = v[i] + v[j];
		}
	}
	cout << ans << endl;
}

int main(){
    //read
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}
