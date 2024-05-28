#include <bits/stdc++.h>
#define f0(i, a) for(int i = 0; i < a; i++)
#define f1(i, a) for(int i = 1; i <= a; i++)
#define read freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#define ll long long
using namespace std;

bool check(string s, string f){
    int pos = s.find(f);
    if(pos == -1) return 0;
    string sub = s.substr(pos + 1);
    if(sub.find(f) ==-1) return 1;
    else return 0;
}

void solve(){
    int n, k ; cin >> n >> k;
    string s (n, 'A');
    string f(k, 'A');
    vector <string> res;
    while(1){
        int pos = s.size() - 1;
        while(s[pos] == 'B' && pos >-1){
            s[pos] = 'A';
            pos--;
        }
        if(pos == -1) break;
        s[pos] = 'B';
        if(check(s, f)) res.push_back(s);
    }
    cout << res.size() << endl;
    for(auto x : res) cout << x << endl;
}

int main(){
    //read
    int t = 1;
     //cin >> t;
    while(t--){
        solve();
    }
}
