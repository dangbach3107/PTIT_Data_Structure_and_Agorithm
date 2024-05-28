#include <bits/stdc++.h>
#define f0(i, a) for(int i = 0; i < a; i++)
#define f1(i, a) for(int i = 1; i <= a; i++)
#define read freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#define ll long long
using namespace std;

ll mod = 123456789;

ll poww(ll n, ll p){
    if(p == 1) return n;
    ll x = poww(n , p / 2) ;
    if(p % 2 ==  1) return (n * (x * x) % mod) % mod;
    else return (x * x) % mod;  
}

void solve(){
    ll n; cin >> n;
    cout << poww(2, n - 1);
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
