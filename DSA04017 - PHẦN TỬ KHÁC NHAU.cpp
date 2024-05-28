#include <bits/stdc++.h>
#define f0(i, a) for(int i = 0; i < a; i++)
#define f1(i, a) for(int i = 1; i <= a; i++)
#define read freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#define ll long long
using namespace std;

void solve(){
    ll n;
    cin >> n;
    vector <ll> a(n), b(n - 1);
    f0(i, n) cin >> a[i];
    f0(i, n - 1) cin >> b[i];
    for(int i = 0; i  <= n - 1; i++){
        if(a[i] != b[i]){
            cout << i + 1;
            return;
        }
    }
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
