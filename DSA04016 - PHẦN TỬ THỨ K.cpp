#include <bits/stdc++.h>
#define f0(i, a) for(int i = 0; i < a; i++)
#define f1(i, a) for(int i = 1; i <= a; i++)
#define read freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#define ll long long
using namespace std;

void solve(){
    ll a, b, k; cin >> a >> b >> k;
    vector<ll> v;
    while(a--){
        ll x; cin >> x;
        v.push_back(x);
    }
    while(b--){
        ll x; cin >> x;
        v.push_back(x);
    }
    sort(begin(v), end(v));
    cout << v[k - 1];
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
