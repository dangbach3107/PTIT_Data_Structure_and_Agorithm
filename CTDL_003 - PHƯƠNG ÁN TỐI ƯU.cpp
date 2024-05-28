#include <bits/stdc++.h>
#define f0(i, a) for(int i = 0; i < a; i++)
#define f1(i, a) for(int i = 1; i <= a; i++)
#define read freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#define ll long long
using namespace std;

void solve(){
    int n, w; cin >> n >> w;
    int a[n], c[n];
    for(auto &x : c) cin >> x;
    for(auto &x : a) cin >> x;
    int res = 0;
    vector <int> b(n + 1, 0), ress;
    while(1){
        int pos = n;
        while(b[pos] == 1 && pos > 0){
            b[pos] = 0;
            pos--;
        }
        if(pos == 0) break;
        b[pos] = 1;
        int sum = 0;
        int weight = 0;
        for(int i = 1; i <=n; i++){
            sum += b[i] * c[i - 1];
            weight += a[i - 1] * b[i];
        }
        if(weight <= w && res < sum) {
            res = sum;
            ress = b;}
    }
    cout << res << endl;
    for(int i = 1; i < n + 1; i++){
        cout << ress[i] << " ";
    }
}

int main(){
    //read
    int t = 1;
     //cin >> t;
    while(t--){
        solve();
    }
}
