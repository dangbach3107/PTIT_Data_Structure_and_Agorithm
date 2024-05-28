#include <bits/stdc++.h>
#define f0(i, a) for(int i = 0; i < a; i++)
#define f1(i, a) for(int i = 1; i <= a; i++)
#define read freopen("input.txt", "r", stdin); freopen ("output.txt", "w", stdout);
using namespace std;

bool cmp(pair<int, int>a, pair<int, int> b){
    return a.second < b.second;
    
}

void solve(){
    int  n, k; cin >> n >> k;
    vector <pair<int, int>> v(n);
    for(auto &x : v){
        cin >> x.first;
        x.second = abs(x.first - k);
    }
    stable_sort(v.begin(), v.end(), cmp);
    for(auto x : v) cout << x.first << " ";
    cout << endl;
}

int main(){
    ///read
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}
