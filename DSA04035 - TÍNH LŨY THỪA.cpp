#include <bits/stdc++.h>
#define f0(i, a) for(int i = 0; i < a; i++)
#define f1(i, a) for(int i = 1; i <= a; i++)
#define read freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#define ll long long
using namespace std;
long long a, b;
const int MOD = 1e9 + 7;

long long poww(long long x, long long y) {
    if (y == 0) return 1;
    long long res = poww(x, y / 2);
    if (y % 2 == 0) return (res * res) % MOD;
    return (x * ((res * res) % MOD)) % MOD;
}

void solve(){
  
    while(1){
        cin >> a >> b;
        if(a == 0 && b == 0) return;
        cout << poww(a, b) << endl;
    }
}

int main(){
    //read
    int t = 1;
    //cin >> t;
    while(t--){
        solve();
        cout << endl;
    }
}
