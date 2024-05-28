#include <bits/stdc++.h>
#define f0(i, a) for(int i = 0; i < a; i++)
#define f1(i, a) for(int i = 1; i <= a; i++)
#define read freopen("input.txt", "r", stdin); freopen ("output.txt", "w", stdout);
using namespace std;

void solve(){
    int n; cin >> n;
    set <int> s;
    while(n--){
    	int x; cin >> x; 
    	while(x){
    		s.insert(x % 10);
    		x /= 10;
		}
	}
	for(auto x : s) cout << x << " ";
	cout << endl;
}

int main(){
    //read
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}
