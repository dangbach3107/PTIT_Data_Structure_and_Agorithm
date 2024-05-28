#include <bits/stdc++.h>
#define f0(i, a) for(int i = 0; i < a; i++)
#define f1(i, a) for(int i = 1; i <= a; i++)
#define read freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#define ll long long
using namespace std;

int dx[8] = {-1, - 1, - 1, 0, 1, 1, 1, 0};
int dy[8] = {-1, 0, 1, 1, 1, 0, -1, -1};

int dem, a[1000][1000];
void dfs(int i, int j){
    if(a[i][j]){
        a[i][j] = 0;
        for(int k = 0; k < 8; k++){
            if(a[i + dx[k]][j + dy[k]]){
                dfs(i + dx[k], j + dy[k]);
            }
        }
    }
}
 
void solve(){
    int n, m; cin >> n  >> m;
    memset(a, 0, sizeof(a));
    dem = 0;
    f1(i, n) f1(j, m) cin >> a[i][j];
    f1(i, n) f1(j, m){
        if(a[i][j]){
            dem++;
            dfs(i, j);
        }
    }
    cout << dem;
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
