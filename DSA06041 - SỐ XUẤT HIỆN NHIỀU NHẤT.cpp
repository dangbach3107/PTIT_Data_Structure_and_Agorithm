#include <bits/stdc++.h>
#define f0(i, a) for(int i = 0; i < a; i++)
#define f1(i, a) for(int i = 1; i <= a; i++)
#define read freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#define ll long long
using namespace std;

void solve(){
    int n; cin >> n;
    vector<int> v(n);
    map <int , int> mp;
    for(auto &x : v){
        cin >> x;
         mp[x]++;
    }
    for(auto x : mp){
        if(x.second > n / 2){
            cout << x.first << "\n";
            return;
        }
    }
    cout << "NO\n";
}

int main() {
    //read
    int t = 1; 
    cin >> t;
    while(t--){
        solve();
    }
}
