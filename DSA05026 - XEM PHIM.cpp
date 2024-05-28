#include <bits/stdc++.h>
#define f0(i, a) for(int i = 0; i < a; i++)
#define f1(i, a) for(int i = 1; i <= a; i++)
#define read freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#define ll long long
using namespace std;

void solve(){
	int w, n; cin >> w >> n;
    int a[n + 1];
    f1(i, n) cin >> a[i];
    vector <int> dp(w + 1, 0);
    dp[0]= 1;
    for(int i = 1; i <= n; i++){
        for(int j = w; j >= a[i]; j--){
            if(dp[j] == 0 && dp[j - a[i]] == 1) {
                dp[j] = 1;
            }
        }
    }
    for(int i = w; i >= 0; i--){
        if(dp[i]) {cout << i;
        return;}
    }
}

int main(){
   // read
    int t = 1;
    //cin >> t;
    while(t--){
        solve();
        cout << endl;
    }
}
