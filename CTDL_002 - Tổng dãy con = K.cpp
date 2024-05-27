#include <bits/stdc++.h>
#define f0(i, a) for(int i = 0; i < a; i++)
#define f1(i, a) for(int i = 1; i <= a; i++)
#define read freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#define ll long long
using namespace std;

void solve(){
    int n, k; cin >> n;
    cin >> k;
    vector <int> v(n);
    for(auto &x : v) cin >> x;
    vector<int> b(n, 0);
    int cnt = 0;
    while(1){
        int pos = n - 1;
        while(b[pos] == 1 && pos > -1){
            b[pos] = 0;
            pos--;
        }
        if(pos == -1) break;
        b[pos] = 1;
        int sum = 0;
        for(int i = 0; i < n; i++){
            sum += b[i] * v[i];
        }

        if(k == sum){cnt++;
            for(int i = 0; i < n; i++){
                if(b[i]) cout << v[i] << " ";
            }
            cout << endl;
        }
        
    }cout << cnt;
}

int main(){
   // read
    int t = 1;
    // cin >> t;
    while(t--){
        solve();
    }
}
