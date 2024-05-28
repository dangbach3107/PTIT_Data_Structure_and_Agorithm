#include <bits/stdc++.h>
#define f0(i, a) for(int i = 0; i < a; i++)
#define f1(i, a) for(int i = 1; i <= a; i++)
#define read freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#define ll long long
using namespace std;

int n, k, s, t; 
vector <vector<int>> g;
vector<int> check;

void DFS(int u){
    check[u] = 1;
    for(int v = 1; v <= n; v++){
        if(g[u][v] && !check[v]){
            DFS(v);
        }
    }
}

int dem(){
    int d = 0;
    for(int i = 0; i <= n; i++){
        d += check[i];
    }
    return d;
}

void ktra(){
    for(int i = 1; i <= n; i++){
        check.assign(n + 1, 0);
        DFS(i);
        if(dem() != n) {
            cout << "NO";
            return;
        }
    }
    cout << "YES";
}

void solve(){
    cin >> n >> k;
    g.assign(n + 1, vector<int> (n + 1)); 
    while(k--){
        int x, y;
        cin >> x >> y;
        g[x][y]= 1;
    }
    ktra();
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
