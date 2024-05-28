#include <bits/stdc++.h>
#define f0(i, a) for(int i = 0; i < a; i++)
#define f1(i, a) for(int i = 1; i <= a; i++)
#define read freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
using namespace std;

void solve() {
    int n, m; cin >> n>> m;
    vector <int> v(n + m);
    for(auto &x : v) cin >> x;
    sort(begin(v), end(v));
    for(auto x : v) cout << x << " " ;
    cout << endl;
}

int main() {
    //read
    int t = 1;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}
