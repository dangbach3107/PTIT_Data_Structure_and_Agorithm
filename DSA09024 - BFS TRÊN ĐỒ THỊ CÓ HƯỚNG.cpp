#include <bits/stdc++.h>
#define f0(i, a) for(int i = 0; i < a; i++)
#define f1(i, a) for(int i = 1; i <= a; i++)
#define read freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#define ll long long
using namespace std;

int n, k, u; 
vector <vector<int> > g;
vector<bool> check;

void BFS(int u){
    queue <int> q;
    q.push(u);
    check[u] = 1;
    cout << u << " ";
    while(!q.empty()){
        int tmp = q.front();
        q.pop();
        for(int v = 1; v <= n; v++){
            if(!check[v] && g[tmp][v]){
                cout << v << " ";
                check[v] = 1;
                q.push(v);
            }
        }
    }
}

void solve(){
    cin >> n >> k>> u;
    g.clear(), check.clear();
    g.resize(n + 1, vector<int> (n + 1, 0));
    check.resize(n + 1, 0);
    while(k--){
        int i, j;
        cin >> i >> j;
        g[i][j]  = 1;
    }
    BFS(u);
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
