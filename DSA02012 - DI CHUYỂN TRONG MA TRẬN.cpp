#include <bits/stdc++.h>
#define f0(i, a) for(int i = 0; i < a; i++)
#define f1(i, a) for(int i = 1; i <= a; i++)
#define read freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#define ll long long
using namespace std;

int n, m;
int a[105][105];
int dem;

void Try(int i, int j){
    if(i == n && j == m){
        dem++; 
        return;
    }
    if(i < n) Try(i + 1, j);
    if(j < m) Try(i, j + 1);
}

void solve(){
    dem = 0;
    cin >> n >> m;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++) cin >> a[i][j];
    }
    Try(1, 1);
    cout << dem ;
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
