#include <bits/stdc++.h>
#define f0(i, a) for(int i = 0; i < a; i++)
#define f1(i, a) for(int i = 1; i <= a; i++)
#define read freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
using namespace std;

void solve() {
    int n, m; cin >> n>> m;
    vector <int> a(n), b(m);
    for(auto &x : a) cin >> x;
    for(auto &x : b) cin >> x;
    cout << 1ll * *max_element(a.begin(), a.end()) * *min_element(b.begin(), b.end()) << endl;
}

int main() {
   // read
    int t = 1;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}
