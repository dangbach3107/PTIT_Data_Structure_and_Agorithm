#include <bits/stdc++.h>
#define f0(i, a) for(int i = 0; i < a; i++)
#define f1(i, a) for(int i = 1; i <= a; i++)
#define read freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#define ll long long
using namespace std;

bool check(vector <int> v){
    vector <int> tmp = v;
    sort(v.begin(), v.end());
    return v == tmp;
}

void solve(){
    int n, k; cin >> n >> k;
    vector <int> v(n);
    for(auto &x : v) cin >> x;
    v.insert(v.begin(), 0);
    vector <int> c(k + 1);
    for(int i = 1; i <=k ;i ++) c[i] = i;
    int res = 0;
    vector <int> tmp(k + 1);
    for(int i = 1; i <=k ;i ++) tmp[i] = v[c[i]];
    if(check(tmp)) res++;
    while(1){
        int i = k;
        while(c[i] == n - k + i && i > 0){
            i--;
        }
        if(i == 0) break;
        c[i]++;
        for(int j = i + 1; j <= k; j++){
            c[j] = c[j - 1] + 1;
        }
        vector <int> tmp(k + 1);
        for(int i = 1; i <=k ;i ++) tmp[i] = v[c[i]];
        if(check(tmp)) res++;
    }
    cout << res ;
}

int main(){
    //read
    int t = 1;
     //cin >> t;
    while(t--){
        solve();
    }
}
