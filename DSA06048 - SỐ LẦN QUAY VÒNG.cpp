#include <bits/stdc++.h>
#define f0(i, a) for(int i = 0; i < a; i++)
#define f1(i, a) for(int i = 1; i <= a; i++)
#define read freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#define ll long long
using namespace std;

void solve(){
    int n; cin >> n;
    vector<int> v(n);
    for(auto &x : v){
        cin >> x;
    }
    vector<int> a = v;
    sort(begin(v), end(v));
    int index = upper_bound(begin(v), end(v), a[0]) - begin(v) - 1;
    if(index == 0) cout << 0 << endl;
    else cout << n - index << endl;
}

int main() {
    //read
    int t = 1; 
    cin >> t;
    while(t--){
        solve();
    }
}
