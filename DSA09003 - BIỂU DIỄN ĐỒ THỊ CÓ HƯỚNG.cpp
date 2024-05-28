#include <bits/stdc++.h>
#define f0(i, a) for(int i = 0; i < a; i++)
#define f1(i, a) for(int i = 1; i <= a; i++)
#define read freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#define ll long long
using namespace std;

void solve(){
    int n, k; cin >> n >> k;
    vector <vector<int> > g(n + 1, vector<int> (n + 1, 0));
    while(k--){
        int x, y; cin >> x>> y;
        g[x][y] = 1;
    }
    for(int i = 1; i <= n; i++){
        cout << i << ": "; 
        for(int j = 1; j <= n; j++)
            if(g[i][j]) cout << j <<  " ";
        cout << endl;
    }
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
