#include <bits/stdc++.h>
#define f0(i, a) for(int i = 0; i < a; i++)
#define f1(i, a) for(int i = 1; i <= a; i++)
#define read freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#define ll long long
using namespace std;

vector <int> List[1005];
int check [1005];
int n, k;

void DFS(int u, int x, int y, int &dem) {
    check[u] = 1;
    dem++;
    for (int v : List[u]) {
        if (!check[v] && !((u == x && v == y) || (u == y && v == x)))
            DFS(v, x, y, dem);
    }
}

void solve(){
    int n, k ; cin >> n >> k;
    for(int i = 1;  i <= n; i++) List[i].clear();
    while(k--){
        int x, y; cin >> x >> y;
        List[x].push_back(y);
        List[y].push_back(x);
    }
    for(int i = 1; i <= n; i++){
        for(auto v : List[i]){
            memset(check , 0 , sizeof(check));
            int dem = 0;
            DFS(1, i, v, dem);
            if(dem != n && i < v) cout << i << " " << v << " ";
            //cout << dem << endl;
        }
    }
}

int main(){
    int t; cin >> t;
    while(t--){
        solve();
        cout << endl;
    }
}
