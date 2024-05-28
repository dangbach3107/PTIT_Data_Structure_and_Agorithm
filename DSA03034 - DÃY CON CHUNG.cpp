#include <bits/stdc++.h>
#define f0(i, a) for(int i = 0; i < a; i++)
#define f1(i, a) for(int i = 1; i <= a; i++)
#define read freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#define ll long long
using namespace std;

void solve(){
    int n, m, k; cin >> n >> m >>k ;
    map<int, int> a, b ,c;
    while(n--){
        int x; cin >> x;
        a[x]++;
    }
    while(m--){
        int x; cin >> x;
        b[x]++;
    }
    while(k--){
        int x; cin >> x;
        c[x]++;
    }
    map <int, int> mp;
    for(auto x : a) mp[x.first]++;
    for(auto x : b) mp[x.first]++;
    for(auto x : c) mp[x.first]++;
    int res = 0;
    for(auto x : mp){
        if(x.second == 3) {
            int tmp = min({a[x.first], b[x.first], c[x.first]});
            while(tmp--)cout << x.first << " ";
            res = 1;
        }
    }
    if(!res) cout << "NO";
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
