#include <bits/stdc++.h>
#define f0(i, a) for(int i = 0; i < a; i++)
#define f1(i, a) for(int i = 1; i <= a; i++)
#define read freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#define ll long long
using namespace std;

int n, m, parent[100001], num[100001];
void init(){
    for(int i = 1; i <= n; i++){
        parent[i] = i;
        num[i] = 1;
    }
}

int Find(int u){
    if(u != parent[u]) 
        parent[u] = Find(parent[u]);
    return parent[u];
}

void Union(int u, int v){
    int a = Find(u), b = Find(v);
    if(a == b) return;
    if(num[a] < num[b]) swap(a, b);
    parent[b] = a;
    num[a] += num[b];
}

void solve(){
    int n, k; cin >> n >> k;
    for(int i = 1; i <= n; i++){
        parent[i] = i;
        num[i] = 1;
    }
    while(k--){
        int x, y; cin >> x >> y;
        Union(x,y);
    }
    int dem = 0;
    for(int i = 1; i <= n; i++) {
        if(i == parent[i]) dem++;
    }
    cout << dem << endl;
}

int main(){
    int t ; cin >> t;
    while(t--){
        solve();
    }
}
