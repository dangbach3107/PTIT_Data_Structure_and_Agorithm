#include <bits/stdc++.h>
#define f0(i, a) for(int i = 0; i < a; i++)
#define f1(i, a) for(int i = 1; i <= a; i++)
#define read freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#define ll long long
using namespace std;
int mod = 1e9 + 7;
void solve(){
    int n, s; cin >> n >> s;
    int a[n + 1];
    f1(i, n ) cin >> a[i];
    int f[s + 1];
    memset(f, 0, sizeof(f));
    f[0] = 1;
    for(int i = 1; i <= s; i++){
        for(int j = 1; j <= n; j++){
            if(i >= a[j]){
                f[i] += f[i - a[j]];
            }
            f[i] %= mod;
        }
    }
    cout << f[s];
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
