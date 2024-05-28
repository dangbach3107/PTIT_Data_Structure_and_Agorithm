#include <bits/stdc++.h>
#define f0(i, a) for(int i = 0; i < a; i++)
#define f1(i, a) for(int i = 1; i <= a; i++)
#define read freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#define ll long long
using namespace std;

void solve(){
    int n; cin >> n;
    ll a[n + 1];
    f1(i, n) cin >> a[i];
    ll f[n + 1];
    f[0] = 0;
    f[1] = a[1]; 
    for(int i = 2; i <= n; i++){
        f[i] = max(f[i - 1], f[ i -2] + a[i]);
    }
    cout << *max_element(f + 1, f + 1 + n);
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
