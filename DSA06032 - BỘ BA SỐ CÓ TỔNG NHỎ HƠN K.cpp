#include <bits/stdc++.h>
#define f0(i, a) for(int i = 0; i < a; i++)
#define f1(i, a) for(int i = 1; i <= a; i++)
#define read freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#define ll long long
using namespace std;

void solve(){
    int n; cin >> n;
    int k; cin >> k;
    vector <ll> a(n); 
    for(auto &x : a) cin >> x;
    sort(begin(a), end(a));
    ll cnt = 0;
    for(int i = 0; i < n - 2; i++){
        if(a[i] > k) break;
        for(int j = i + 1; j < n - 1; j++){
            if(a[i] + a[j] > k) break;
            cnt+= lower_bound(begin(a) + j + 1, end(a), k - a[i] - a[j]) - begin(a) - j - 1;
        }
    }
    cout << cnt << endl;
}

int main() {
    //read
    int t = 1; 
    cin >> t;
    while(t--){
        solve();
    }
}
