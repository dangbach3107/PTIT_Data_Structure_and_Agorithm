#include <bits/stdc++.h>
#define f0(i, a) for(int i = 0; i < a; i++)
#define f1(i, a) for(int i = 1; i <= a; i++)
#define read freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#define ll long long
using namespace std;
void solve(){
    int n, m; cin >> n >> m;
    int a[n + 1][m + 1];
    memset(a, 0, sizeof(a));
    f1(i, n) f1(j, m) cin >> a[i][j];
    int res = -1;
    f1(i, n){
        f1(j, m){
            if(a[i][j]){
                a[i][j] = min({a[i - 1][j], a[i - 1][j - 1], a[i][j - 1]}) + 1;
            }
            res = max(res, a[i][j]);
        }
    }
    cout << res;
}

int main(){
    //read
    int T = 1;
    cin >> T;
    while(T--){
        solve();
        cout << endl;
    }
}
