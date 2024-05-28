#include <bits/stdc++.h>
#define f0(i, a) for(int i = 0; i < a; i++)
#define f1(i, a) for(int i = 1; i <= a; i++)
#define read freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#define ll long long
using namespace std;
int mod= 1e9 + 7;
ll dp[1005][1005];

void ktao(){
    for(int i = 0; i <= 1000; i++){
        for(int j = 0; j <= i; j++){
            if(j == 0 || j == i){
                dp[i][j] = 1;
            }
            else dp[i][j] = (dp[i - 1][j - 1] + dp[i - 1][j]) % mod;
        }
    }
}

void solve(){
    ll n, k;
    cin >> n>> k;
    cout << dp[n][k];
}

int main(){
    //read
    ktao();
    int T = 1;
    cin >> T;
    while(T--){
        solve();
        cout << endl;
    }
}
