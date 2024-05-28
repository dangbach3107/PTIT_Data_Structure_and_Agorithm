#include <bits/stdc++.h>
#define f0(i, a) for(int i = 0; i < a; i++)
#define f1(i, a) for(int i = 1; i <= a; i++)
#define read freopen("input.txt", "r", stdin); freopen ("output.txt", "w", stdout);
using namespace std;

void solve(){
    int n, m; cin >> n >> m;
    set <int> a, b;
    f0(i, n){
        int x; cin >> x;
        a.insert(x); 
    }
    f0(i, m){
        int x; cin >> x;
        b.insert(x);
    }
    map <int, int> mp;
    for(auto x : a) mp[x]++;
    for(auto x : b) mp[x]++;
    for(auto x : mp) cout << x.first << " ";
    cout << endl;
    for(auto x : mp) if(x.second == 2) cout << x.first << " ";
    cout << endl;
}

int main(){
    //read
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}
