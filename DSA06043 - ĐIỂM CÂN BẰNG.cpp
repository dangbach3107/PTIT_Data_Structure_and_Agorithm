#include <bits/stdc++.h>
#define f0(i, a) for(int i = 0; i < a; i++)
#define f1(i, a) for(int i = 1; i <= a; i++)
#define read freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#define ll long long
using namespace std;

void solve(){
    int n; cin >> n;
    vector <ll> a(n);
    ll sum = 0; 
    for(auto &x : a){
        cin >> x;
        sum += x;
    }
    int ans = -2;
    for(int i = 1; i <n; i++) a[i] += a[i - 1];
    for(int i = 1; i < n; i++){
        if(a[i - 1] + a[i] == sum) {
            ans = i;
            break;
        }
    }
    cout << ans + 1<< endl;
}

int main() {
    //read
    int t = 1; 
    cin >> t;
    while(t--){
        solve();
    }
}
