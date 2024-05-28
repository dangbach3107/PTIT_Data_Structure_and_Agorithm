#include <bits/stdc++.h>
#define f0(i, a) for(int i = 0; i < a; i++)
#define f1(i, a) for(int i = 1; i <= a; i++)
#define read freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#define ll long long
using namespace std;

void solve(){
    int n; cin >> n; cin.ignore();
    vector <vector<int> > g(n + 1, vector<int> (n + 1, 0));
    string s;
    f1(i, n){
        getline(cin , s);
        stringstream ss(s); 
        int token;
        while(ss >> token){
            g[i][token] = g[token][i] = 1;
        }
    }
    f1(i, n){
        for(int j = i + 1; j <= n; j++){
            if(g[i][j]){ cout << i << " " << j; cout << endl;}
            
        }
    }
}

int main(){
   // read
    int t = 1;
    //cin >> t;
    while(t--){
        solve();
        cout << endl;
    }
}
