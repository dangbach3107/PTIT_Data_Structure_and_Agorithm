#include <bits/stdc++.h>
#define f0(i, a) for(int i = 0; i < a; i++)
#define f1(i, a) for(int i = 1; i <= a; i++)
#define read freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
using namespace std;

void solve(){
    int n; cin >> n;
    set <int> s;
    while(n--){
        int x; cin >> x; 
        s.insert(x);
    }
    if(s.size() < 2) cout << "-1";
    else{int t = 2;
    for(auto x : s){
        if(t > 0){
            t--;
            cout << x << " ";
        }
    }}
    cout << endl;
}

int main() {
    
    int t = 1; 
    cin >> t;
    while(t--){
        solve();
    }
}
