#include <bits/stdc++.h>
using namespace std;

int n, m , u;
bool check[1005];
vector <int> List[1005];

void DFS(int u){
    check[u] = 1;
    cout << u << " ";
    for(int v : List[u]) 
        if(!check[v])
            DFS(v);
}

int main(){
    int t; cin >> t;
    while(t--){
        cin >> n >> m >> u;
        memset(check, 0, sizeof(check));
        for(int i  = 0; i < 1005; i++){
            List[i].clear();
        }
        for(int i = 1; i <= m; i++){
            int x, y; cin >> x >> y;
            List[x].push_back(y);
            List[y].push_back(x);
        }
        DFS(u);
        cout << endl;
    }
}
