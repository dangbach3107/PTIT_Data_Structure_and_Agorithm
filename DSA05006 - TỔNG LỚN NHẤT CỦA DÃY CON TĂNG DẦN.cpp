#include <bits/stdc++.h>
#define f0(i, a) for(int i = 0; i < a; i++)
#define f1(i, a) for(int i = 1; i <= a; i++)
#define read freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#define ll long long
using namespace std;

void solve(){
    int n; cin >> n;
    ll a[n + 1];
    ll f[n + 1];
    f1(i, n) {
        cin >> a[i];
        f[i] = a[i];
    }
    for(int i = 2; i <= n; i++){
        for(int j = 1; j < i; j++  ){
            if(a[i] > a[j]) f[i] = max(f[i], f[j] + a[i]);
        }
    }
    cout << *max_element(f + 1, f + 1 + n);
}

int main(){
  //  read
    int t = 1;
    cin >> t; 
    while(t--){
        solve();
        cout << endl;
    }
}
