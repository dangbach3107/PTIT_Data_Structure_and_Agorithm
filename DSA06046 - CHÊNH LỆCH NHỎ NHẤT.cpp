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
    sort(begin(v), end(v));
    set<int> s;
    for(int i = 1; i < n; i++){
        s.insert(v[i] - v[i - 1]);
    }
    cout << *s.begin() << endl;
}

int main() {
    //read
    int t = 1; 
    cin >> t;
    while(t--){
        solve();
    }
}
