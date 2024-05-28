#include <bits/stdc++.h>
#define f0(i, a) for(int i = 0; i < a; i++)
#define f1(i, a) for(int i = 1; i <= a; i++)
#define read freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#define ll long long
using namespace std;

void solve(){
    int n; cin >> n;
    ll a[n], b[n];
    for(auto &x : a) cin >> x;
    for(auto &x :b) cin >> x;
    sort(a, a + n);
    sort(b, b + n, greater<ll>());
    ll res = 0;
    for(int i = 0; i < n; i++) res += a[i] * b[i];
    cout << res;
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
