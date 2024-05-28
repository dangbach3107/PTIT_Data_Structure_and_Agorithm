#include <bits/stdc++.h>
#define f0(i, a) for(int i = 0; i < a; i++)
#define f1(i, a) for(int i = 1; i <= a; i++)
#define read freopen("input.txt", "r", stdin); freopen ("output.txt", "w", stdout);
using namespace std;

void solve(){
    int n, k , cnt = 0; cin >> n >> k;
    int a[n];
    while(n--){
    	int x; cin >> x;
    	if(x == k) cnt++;
	}
	if(cnt == 0) cout << "-1\n";
	else
	cout << cnt << endl;
}

int main(){
    //read
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}
