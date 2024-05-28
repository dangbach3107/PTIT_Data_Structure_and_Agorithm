#include <bits/stdc++.h>
#define f0(i, a) for(int i = 0; i < a; i++)
#define f1(i, a) for(int i = 1; i <= a; i++)
#define read freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#define ll long long
using namespace std;

int mod = 1e9 + 7;

ll power(ll a, ll n){
	if(n == 1) return a;
	ll x = power(a, n/2);
	if(n & 1) return x % mod * a % mod * x % mod;
	else return x % mod * x % mod;
}

void solve(){
	ll a, n; cin >> a >> n;
	cout << power(a, n);
}

int main(){
    //read
    int t = 1;
    cin >> t;
    while(t--){
        solve();
        cout << endl;
    }
}
