#include <bits/stdc++.h>
#define f0(i, a) for(int i = 0; i < a; i++)
#define f1(i, a) for(int i = 1; i <= a; i++)
#define read freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#define ll long long
using namespace std;

int n, k, s, t; 
vector <vector<int>> g;
vector<int> check, truoc;

void DFS(int u){
    check[u] = 1;
    for(int v = 1; v <= n; v++){
        if(g[u][v] && !check[v]){
            truoc[v] = u;
            DFS(v);
        }
    }
}

void BFS(int u){
    check[u] = 1;
    queue <int> q;
    q.push(u);
    while(!q.empty()){
        int tmp = q.front();
        q.pop();
        for(int v = 1; v <= n; v++){
            if(g[tmp][v] && !check[v]){
                check[v] = 1;
                truoc[v] = tmp;
                q.push(v);
            }
        }
    }
}


void solve(){
    cin >> n >> k>> s >> t;
    g.clear(); g.resize(n + 1, vector<int> (n + 1)); 
    check.clear();check.resize(n + 1, 0);
    truoc.clear();truoc.resize(n + 1, 0);
    while(k--){
        int x, y;
        cin >> x >> y;
        g[x][y]= g[y][x] = 1;
    }
    BFS(s);
    if(truoc[t] == 0) {
        cout << -1 ;
        return;
    }
    vector<int> res;
    int tmp = t;
    res.push_back(tmp);
    while(tmp != s){
        tmp = truoc[tmp];
        res.push_back(tmp);
    }
    for(int i =res.size() - 1; i>= 0; i--){
        cout << res[i] << " ";
    }
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
