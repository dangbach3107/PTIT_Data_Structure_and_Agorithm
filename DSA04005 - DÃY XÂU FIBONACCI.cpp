#include <bits/stdc++.h>
#define f0(i, a) for(int i = 0; i < a; i++)
#define f1(i, a) for(int i = 1; i <= a; i++)
#define read freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#define ll long long
using namespace std;

ll f[93];

void ktao(){
    f[1] = 1; f[2] = 1;
    for(int i = 3; i <= 92; i++){
        f[i] = f[i - 2] + f[i - 1];
    }
}

void solve(){
    ktao();
    ll n, k;
    cin >> n >> k;
    while(1){
        if(n == 1 || n == 2){
            if(n == 1) cout << "A";
            else cout << "B";
            return;
        }
        if(k > f[n - 2]){
            k -= f[n - 2];
            n--; 
        }
        else n -= 2;
    }
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
