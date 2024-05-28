#include <bits/stdc++.h>
#define f0(i, a) for(int i = 0; i < a; i++)
#define f1(i, a) for(int i = 1; i <= a; i++)
#define read freopen("input.txt", "r", stdin); freopen ("output.txt", "w", stdout);
using namespace std;

void solve(){
    int n; cin >> n;
    int a[n];
    for(auto &x : a) cin >> x;
    sort(a, a + n, greater<int>());
    for(int i = 0; i < n / 2; i++){
        cout << a[i] << " " << a[n - i - 1] << " ";
    }
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
