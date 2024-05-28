#include <bits/stdc++.h>
#define f0(i, a) for(int i = 0; i < a; i++)
#define f1(i, a) for(int i = 1; i <= a; i++)
#define read freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#define ll long long
using namespace std;

void solve(){
    int n, V; cin >> n>> V;
    int w[n + 1], v[n + 1];
    f1(i, n) cin >> w[i];
    f1(i, n) cin >> v[i];
    int f[n + 1][V + 1];
    f[0][0] = 0;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= V; j++){
            if(j >= w[i]){
                f[i][j] = max(f[i - 1][j - w[i]] + v[i], f[i - 1][j]);
            }
            else f[i][j] = f[i - 1][j];
        }
    }
    cout << f[n][V];
}

int main(){ 
   // read
    int t = 1;
    cin >> t; 
    while(t--){
        solve();
        cout << endl;
    }
}
