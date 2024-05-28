#include <bits/stdc++.h>
#define f0(i, a) for(int i = 0; i < a; i++)
#define f1(i, a) for(int i = 1; i <= a; i++)
#define read freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#define ll long long
using namespace std;

int mod = 1e9 + 7;
void solve(){
    int n;
    priority_queue<ll, vector<ll>, greater<int>> q;
    cin >> n;
    while(n--){
        ll x; cin >> x;
        q.push(x);
    }
    ll cost = 0;
    while(q.size() > 1){
        ll top1 = q.top(); q.pop();
        ll top2 = q.top(); q.pop();
        cost = (cost + top1 + top2) % mod;
        q.push((top1 + top2) % mod);
    }
    cout << cost;
}

int main(){
  //  read
    int t = 1;
    cin >> t; 
    while(t--){
        solve();
        cout << endl;
    }
}
