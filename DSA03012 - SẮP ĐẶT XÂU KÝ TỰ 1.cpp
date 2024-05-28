#include <bits/stdc++.h>
#define f0(i, a) for(int i = 0; i < a; i++)
#define f1(i, a) for(int i = 1; i <= a; i++)
#define read freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#define ll long long
using namespace std;

void solve(){
    string s; cin >> s;
    map <char, int> m;
    for(auto x : s){
        m[x]++;
    }
    int max = -1;
    for(auto x : m){
        max = ::max(max, x.second);
    }
    if(max <= (s.size() + 1)/ 2) cout << "1\n";
    else cout << "-1";
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
