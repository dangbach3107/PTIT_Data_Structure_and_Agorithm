#include <bits/stdc++.h>
#define f0(i, a) for(int i = 0; i < a; i++)
#define f1(i, a) for(int i = 1; i <= a; i++)
#define read freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#define ll long long
using namespace std;

void solve(){
    int n, s, m;
    cin >> n>> s >> m;
    if(n < m || (6 * n < 7 * m && s >= 7)) {
        cout << -1;
        return;
    }
    else cout << (int)((s * m + n - 1) / n ) ;
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
