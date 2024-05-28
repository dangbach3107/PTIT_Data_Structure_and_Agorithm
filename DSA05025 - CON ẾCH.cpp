#include <bits/stdc++.h>
#define f0(i, a) for(int i = 0; i < a; i++)
#define f1(i, a) for(int i = 1; i <= a; i++)
#define read freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#define ll long long
using namespace std;

void solve(){
    ll f[55]; int n; cin >> n;
    f[0] = 1; f[1] = 1; f[2] = 2;
    for(int i = 3; i < 55; i++){
        f[i] = f[i - 1] + f[i - 2] + f[i - 3];
    }
    cout << f[n];
}

int main(){
    //read
    int T = 1;
    cin >> T;
    while(T--){
        solve();
        cout << endl;
    }
}
