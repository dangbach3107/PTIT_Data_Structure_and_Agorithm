#include <bits/stdc++.h>
#define f0(i, a) for(int i = 0; i < a; i++)
#define f1(i, a) for(int i = 1; i <= a; i++)
#define read freopen("input.txt", "r", stdin); freopen ("output.txt", "w", stdout);
using namespace std;

int main(){
   // read
    int t; cin >> t;
    while(t--){
        int mod = 1e9 + 7;
        int n; cin >> n;
        int a[n];
        for(auto &x : a) cin >> x;
        sort(a, a + n);
        long long sum = 0;
        for(int i = 0; i < n; i++){
            sum = (sum + 1ll * i * a[i]) % mod;
        }
        cout << sum << endl;
    }
}
