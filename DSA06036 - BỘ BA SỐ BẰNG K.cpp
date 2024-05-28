#include <bits/stdc++.h>
#define f0(i, a) for(int i = 0; i < a; i++)
#define f1(i, a) for(int i = 1; i <= a; i++)
#define read freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
using namespace std;

void solve(){
    int n; cin >> n;int k ;cin >> k;
    int a[n];
    for(auto &x : a) cin >> x ; sort(a, a + n); 
    for(int i = 0 ; i < n - 2; i ++){
        for(int j = i + 1; j < n - 1; j++){
            if(binary_search(a + j + 1, a + n, k - a[i] - a[j])) {
                cout << "YES\n";
                return;
            }
        }
    }
    cout << "NO\n";
}

int main() {
    
    int t = 1; 
    cin >> t;
    while(t--){
        solve();
    }
}
