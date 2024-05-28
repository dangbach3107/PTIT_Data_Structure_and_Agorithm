#include <bits/stdc++.h>
#define f0(i, a) for(int i = 0; i < a; i++)
#define f1(i, a) for(int i = 1; i <= a; i++)
#define read freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#define ll long long
using namespace std;

void solve(){
    int n; cin >> n;
    vector<ll> v(n);
    for(auto &x : v){
        cin >> x; 
    }
    sort(begin(v) , end(v));
    for(int i = 0; i < n - 2; i++){
        for(int j = i + 1; j < n - 1; j++){
            ll x = sqrt(v[i] * v[i] + v[j] * v[j]);
            if(x * x == v[i] * v[i] + v[j] * v[j] &&binary_search(begin(v) + j + 1, end(v), x)) {
                cout << "YES\n";
                return;
            }
        }
    }
    cout << "NO\n";
}

int main() {
    
    int t = 1; 
    cin >> t;
    while(t--){
        solve();
    }
}
