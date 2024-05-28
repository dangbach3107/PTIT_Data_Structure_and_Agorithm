#include <bits/stdc++.h>
#define f0(i, a) for(int i = 0; i < a; i++)
#define f1(i, a) for(int i = 1; i <= a; i++)
#define read freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#define ll long long
using namespace std;

void solve(){
    int n, m; cin >> n >> m;
    ll a[n + 1][m + 1], f[n + 1][m + 1];
    memset(f, 2, sizeof(f));
    f[0][0] = 0;
    f1(i, n) f1(j, m){
        cin >> a[i][j];
        f[i][j] = a[i][j];
    }
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            f[i][j] = a[i][j] + min(f[i - 1][j], min(f[i][j - 1], f[i - 1][j - 1]));
        }
    }
    cout << f[n][m];
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
