#include <bits/stdc++.h>
#define f0(i, a) for(int i = 0; i < a; i++)
#define f1(i, a) for(int i = 1; i <= a; i++)
#define read freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#define ll long long
using namespace std;

void solve(){
    int d; cin >> d;
    string s; cin >> s;
    map<char, int> m;
    int max = -1;
    for(auto x : s) {
        m[x]++;
        max = ::max(max, m[x]);
    }
    if(max <= (s.size() + d - 1) / d) cout << "1";
    else cout << -1 ;
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
