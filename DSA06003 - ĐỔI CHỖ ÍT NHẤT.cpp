#include <bits/stdc++.h>
#define f0(i, a) for(int i = 0; i < a; i++)
#define f1(i, a) for(int i = 1; i <= a; i++)
#define read freopen("input.txt", "r", stdin); freopen ("output.txt", "w", stdout);
using namespace std;

void solve(){
    int n; cin >> n;
    int a[n];
    for(auto &x : a) cin >> x;
    int ans = 0;
    for(int i = 0; i < n - 1; i++){
        int k = i;
        for(int j = i + 1; j < n; j++){
            if(a[k] > a[j]) k = j;
        }
        if(k != i){
            ans++;
            swap(a[k], a[i]);
        }
    }
    cout << ans << endl;
}

int main(){
    //read
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}
