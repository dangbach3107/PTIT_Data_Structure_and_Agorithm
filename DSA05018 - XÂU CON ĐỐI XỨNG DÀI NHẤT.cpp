#include <bits/stdc++.h>
#define f0(i, a) for(int i = 0; i < a; i++)
#define f1(i, a) for(int i = 1; i <= a; i++)
#define read freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#define ll long long
using namespace std;

int mod = 1e9 + 7;
void solve(){
    string s; cin >> s;
    int n = s.size();
    int res = -1;
    vector <vector<int>> f(n + 1, vector <int> (n + 1, 0));
    for(int i = n - 1; i >= 0; i--){
        for(int j = i; j <= n - 1; j++){
            if(i == j) f[i][j] = 1;
            else if(s[i] == s[j]){
                if(j - i == 1) f[i][j] = 1;
                else f[i][j] = f[i + 1][j - 1];
            }
            if(f[i][j]) res = max(res, j - i + 1);
        }
    }
    cout << res;
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
