#include <bits/stdc++.h>
#define f0(i, a) for(int i = 0; i < a; i++)
#define f1(i, a) for(int i = 1; i <= a; i++)
#define read freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#define ll long long
using namespace std;

ll f[55];

void ktao(){
    f[1] = 1;
    for(int i = 2; i <= 54; i++){
        f[i] = 2 * f[i - 1];
    }
}

void solve(){
    ktao();
    ll a, k;
    cin >>a >> k;
    for(int i = a; i >= 1; i--){
        if(k == f[i]){
            cout << i;
        }
        else if(k > f[i]) k -= f[i];
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
