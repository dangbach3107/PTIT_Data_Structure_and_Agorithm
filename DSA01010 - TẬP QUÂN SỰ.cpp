#include <bits/stdc++.h>
#define f0(i, a) for(int i = 0; i < a; i++)
#define f1(i, a) for(int i = 1; i <= a; i++)
#define read freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#define ll long long
using namespace std;

void solve(){
    int n, k ; cin >> n >> k;
    vector <int> v(k);
    map <int, int> m;
    for(auto &x : v) {
        cin >> x;
        m[x]++;
    }
    int i = k - 1;
    while(v[i] == n - k + i + 1 && i > -1) i--;
    if(i == -1) {
        cout << k << endl;
        return;
    }
    v[i]++;
    for(int j = i + 1; j < k; j++) v[j] = v[j - 1] + 1;
    for(auto &x : v) {
        m[x]++;
    }
    int res = 0;
    for(auto x : m){
        if(x.second == 1) res++;
    }
    cout << res / 2 <<endl; 
}

int main(){
    //read
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}
