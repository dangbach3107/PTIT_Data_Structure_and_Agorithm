#include <bits/stdc++.h>
#define f0(i, a) for(int i = 0; i < a; i++)
#define f1(i, a) for(int i = 1; i <= a; i++)
#define read freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#define ll long long
using namespace std;

void solve(){
    int n, k; cin >> n >> k;
    vector<int> c(k + 1);
    for(int i = 1; i < k + 1; i++){
        c[i] = i;
    }
    for(int i = 1; i <= k; i++){
        cout << char('A' - 1 + i) ;
    }cout << endl;
    while(1){
        int pos = k;
        while(c[pos] == n - k + pos && pos > 0){
            pos--;
        }
        if(pos == 0) break;
        c[pos]++;
        for(int i = pos + 1; i <= k; i++){
            c[i] = c[i - 1] + 1;
        }
        for(int i = 1; i <= k; i++){
         cout << char('A' - 1 + c[i]) ;
        }cout << endl;
    }
}

int main(){
    //read
    int t = 1;
     cin >> t;
    while(t--){
        solve();
    }
}
