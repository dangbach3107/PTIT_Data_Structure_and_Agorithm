#include <bits/stdc++.h>
#define f0(i, a) for(int i = 0; i < a; i++)
#define f1(i, a) for(int i = 1; i <= a; i++)
#define read freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#define ll long long
using namespace std;

void solve(){
    int n; cin >> n;
    float a[n + 1], b[n + 1];
    f1(i, n) {
        cin >> a[i] >> b[i];
    }
    int f[n + 1];
    for(int i = 1; i <= n; i++){
        f[i] = 1;
        for(int j = 1; j < i; j++){
            if(a[i] > a[j] && b[i] < b[j]){
                f[i] = max(f[i], f[j] + 1);
            }
        }
    }
    cout << *max_element(f + 1, f + n + 1);
}

int main(){
    //read
    int t = 1;
    cin >> t; 
    while(t--){
        solve();
        cout << endl;
    }
}
