#include <bits/stdc++.h>
#define f0(i, a) for(int i = 0; i < a; i++)
#define f1(i, a) for(int i = 1; i <= a; i++)
#define read freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#define ll long long
using namespace std;

bool check(string a, int k){
    int dem = 0;
    for(auto x : a){
        if(x == '1') dem++;
    }
    return k == dem;
}

void solve(){
    int n; cin >> n; int k; cin >> k;
    string s = "";
    for(int  i = 1; i <= n; i++){
        s += "0";
    }
    while(1){
        if(check(s, k)) 
        cout << s << "\n";
        int pos = n - 1;
        while(s[pos] == '1' && pos > -1){
            s[pos] = '0';
            pos--;
        }
        if(pos == -1) return;
        s[pos] = '1';
    } 
}

int main() {
    //read
    int t = 1; 
    cin >> t;
    while(t--){
        solve();
    }
}
