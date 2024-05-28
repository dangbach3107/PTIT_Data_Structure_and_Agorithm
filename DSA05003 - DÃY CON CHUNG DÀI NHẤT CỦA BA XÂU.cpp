#include <bits/stdc++.h>
#define f0(i, a) for(int i = 0; i < a; i++)
#define f1(i, a) for(int i = 1; i <= a; i++)
#define read freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#define ll long long
using namespace std;
int f[101][101][101];
void solve(){
    int n, m , p; cin >> n >> m >> p;
    string a, b , c; cin >> a >> b >> c;
    memset(f, 0, sizeof(f));
    f1(i, n) f1(j, m) f1(k, p){
        if(a[i - 1] == b[ j - 1] && b[j - 1] == c[k - 1]){
            f[i][j][k] = f[i - 1][j  - 1][k - 1] + 1;
        }
        else f[i][j][k] = max({f[i - 1][j][k], f[i][j - 1][k], f[i][j][ k - 1]});
    } cout << f[n][m][p];
}

int main(){
    
    int t = 1;
    cin >> t; 
    while(t--){
        solve();
        cout << endl;
    }
}
