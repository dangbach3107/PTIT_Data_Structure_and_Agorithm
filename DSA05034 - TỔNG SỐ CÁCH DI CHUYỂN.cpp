#include <bits/stdc++.h>
#define f0(i, a) for(int i = 0; i < a; i++)
#define f1(i, a) for(int i = 1; i <= a; i++)
#define read freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#define ll long long
using namespace std;

int mod = 1e9 + 7;
void solve(){
    int n, k;
    cin >> n>> k;
    vector<int> dp(n + 1, 0);
    dp[0] = 1 ; dp[1] = 1;
    for(int i = 2; i <= n; i++){
        int tmp = max(0, i - k);
        for(int j = tmp; j <= i - 1; j++){
            dp[i] = (dp[i] + dp[j]) % mod;
        }
    }
    cout << dp[n];
}

int main(){
  //  read
    int T = 1;
    cin >> T;
    while(T--){
        solve();
        cout << endl;
    }
}
