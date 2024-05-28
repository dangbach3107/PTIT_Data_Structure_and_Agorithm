#include <bits/stdc++.h>
#define f0(i, a) for(int i = 0; i < a; i++)
#define f1(i, a) for(int i = 1; i <= a; i++)
#define read freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#define ll long long
using namespace std;

void solve(){
    int n, s; cin >> n >> s;
    int a[n + 1]; 
    f1(i, n) cin >> a[i];
    bool f[s + 1];
    memset(f, 0, sizeof(f));
    f[0] = 1;
    for(int i = 1; i <= n; i++){
        for(int j = s; j >= 1; j--){
            if(j >= a[i] && f[j - a[i]]) f[j] = true;
        }
    }
    if(f[s]) cout << "YES"; else cout << "NO";
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
