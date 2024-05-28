#include <bits/stdc++.h>
#define f0(i, a) for(int i = 0; i < a; i++)
#define f1(i, a) for(int i = 1; i <= a; i++)
#define read freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#define ll long long
using namespace std;

void solve(){
    int n; cin >> n;
    int a[n + 1];
    f1(i, n) cin >> a[i];
    vector <int> dp(n + 1, 1);
    for(int i = 2; i <= n; i++){
        for(int j = 1; j < i; j++){
            if(a[j] < a[i]) dp[i] = max(dp[i], dp[j] + 1);
        }
    }
    cout << *max_element(dp.begin(), end(dp));
}

int main(){
    //read
    int T = 1;
    //cin >> T;
    while(T--){
        solve();
        cout << endl;
    }
}
