#include <bits/stdc++.h>
#define f0(i, a) for(int i = 0; i < a; i++)
#define f1(i, a) for(int i = 1; i <= a; i++)
#define read freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#define ll long long
using namespace std;

void solve(){
    int n; cin >> n;
    vector<int> dp(n + 1, 0);
    int tmp = n, max = -1;
    while(n--){
        int x; cin >> x;
        dp[x] = dp[x - 1] + 1;
        max = ::max(max, dp[x]);
    }
    cout << tmp - max;
}

int main(){
    //read
    int t = 1;
   // cin >> t;
    while(t--){
        solve();
        cout << endl;
    }
}
