#include <bits/stdc++.h>
#define f0(i, a) for(int i = 0; i < a; i++)
#define f1(i, a) for(int i = 1; i <= a; i++)
#define read freopen("input.txt", "r", stdin); freopen ("output.txt", "w", stdout);
using namespace std;

int main(){
    //read
    int t; cin >> t;
    while(t--){
        int n, k; cin >> n >> k;
        int a[n]; 
        for(auto &x : a) cin >> x;
        sort(a, a + n);
        for(int i = 1; i < n; i++){
            a[i] += a[i - 1];
        }
        k = min(k, n - k);
        cout << a[n - 1] - 2 * a[k - 1] << endl;
    }
}
