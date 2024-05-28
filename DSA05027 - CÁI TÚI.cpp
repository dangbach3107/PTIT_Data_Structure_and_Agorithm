#include <bits/stdc++.h>
#define f0(i, a) for(int i = 0; i < a; i++)
#define f1(i, a) for(int i = 1; i <= a; i++)
#define read freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#define ll long long
using namespace std;

int a[1005], v, n, c[1005];

void solve(){
	cin >> n >> v;
    for(int i = 1; i <= n; i++) cin >> a[i];
    for(int i = 1; i <= n; i++) cin >> c[i];
    vector <vector<int>> dp(n + 1, vector<int> (v + 1, 0));
    for(int i = 1;i <= n; i++){
        for(int j = 1; j <= v; j++){
            if(j >= a[i]){
                dp[i][j] = max(dp[i - 1][j] , dp[i - 1][j - a[i]] + c[i]);
            }
            else dp[i][j] = dp[i - 1][j];
        }
    }
    cout << dp[n][v];
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
