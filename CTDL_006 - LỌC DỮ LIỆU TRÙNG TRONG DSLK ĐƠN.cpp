#include <bits/stdc++.h>
#define f0(i, a) for(int i = 0; i < a; i++)
#define f1(i, a) for(int i = 1; i <= a; i++)
#define read freopen("input.txt", "r", stdin); freopen ("output.txt", "w", stdout);
using namespace std;

void solve(){
    int n; cin >> n;
    vector<int > v;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        if(binary_search(begin(v), end(v), x) == 0)
            v.push_back(x);
    }
    for(auto x : v) cout << x << " "; 
}

int main(){
    //read
    int t = 1;
    //cin >> t;
    while(t--){
        solve();
    }
}
