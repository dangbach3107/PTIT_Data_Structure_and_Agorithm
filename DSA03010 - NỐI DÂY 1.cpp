#include <bits/stdc++.h>
#define f0(i, a) for(int i = 0; i < a; i++)
#define f1(i, a) for(int i = 1; i <= a; i++)
#define read freopen("input.txt", "r", stdin); freopen ("output.txt", "w", stdout);
using namespace std;

void solve(){
    int n; cin >> n;
    long long cost = 0;
    priority_queue <int, vector<int>, greater<int>> pq;
    f0(i, n){
        int x; cin >> x;
        pq.push(x);
    }
    while(pq.size() > 1){
        int top1 = pq.top(); pq.pop();
        int top2 = pq.top(); pq.pop();
        cost += top1 + top2;
        pq.push(top1 + top2);
    }
    cout << cost << '\n';
}

int main(){
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}
