#include <bits/stdc++.h>
#define f0(i, a) for(int i = 0; i < a; i++)
#define f1(i, a) for(int i = 1; i <= a; i++)
#define read freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#define ll long long
using namespace std;

void solve(){
    int n, k;
    cin >> n >> k;
    vector <vector<int>> g(n + 1);
    while(k--){
        int x, y;
         cin >> x >> y;
        g[x].push_back(y);
        g[y].push_back(x); 
    }
    int odd_edge = 0;
    for(int i = 1; i <= n; i++){
        if(g[i].size() % 2 == 1) odd_edge++;
    }
    if(odd_edge == 2) cout << 1;
    else if(odd_edge == 0) cout << 2;
    else cout << 0;
}

int main(){
  //  read
    int t = 1;
    cin >> t; 
    while(t--){
        solve();
        cout << endl;
    }
}
