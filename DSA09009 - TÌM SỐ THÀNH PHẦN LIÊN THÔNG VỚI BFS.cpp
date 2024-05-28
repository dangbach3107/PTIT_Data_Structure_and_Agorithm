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
    check.assign(n + 1, 0);
    for(int u = 1; u <= n; u++){
        if(!check[u]){
            d++;
            DFS(u);
        }
    }
    return d;
}


void solve(){
    cin >> n >> k;
    g.assign(n + 5, vector<int> (n + 5)); 
    while(k--){
        int x, y;
        cin >> x >> y;
        g[x][y]= g[y][x] = 1;
    }
    cout << dem();
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
