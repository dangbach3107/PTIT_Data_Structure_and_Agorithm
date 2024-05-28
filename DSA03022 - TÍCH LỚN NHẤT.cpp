#include <bits/stdc++.h>
#define f0(i, a) for(int i = 0; i < a; i++)
#define f1(i, a) for(int i = 1; i <= a; i++)
#define read freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#define ll long long
using namespace std;

void solve(){
    int n; cin >> n;int a[n]; 
    for(auto &x : a) cin >> x;
    sort(a, a + n);
    int max = ::max({a[0] * a[1], a[0] * a[1] * a[n - 1], a[n-1]*a[n - 2] , a[n - 1] * a[n - 2] * a[n - 3]});
    cout << max;
}

int main(){
    //read
    int t = 1;
    //cin >> t;
    while(t--){
        solve();
        cout << endl;
    }
}
