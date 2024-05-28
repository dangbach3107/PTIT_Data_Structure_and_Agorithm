#include <bits/stdc++.h>
#define f0(i, a) for(int i = 0; i < a; i++)
#define f1(i, a) for(int i = 1; i <= a; i++)
#define read freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#define ll long long
using namespace std;

void solve(){
    string s; cin >> s;
    int pos = s.size() - 1; 
    while(s[pos] == '0' && pos > -1){
        pos--;
    }
    if(pos == -1){
        int dem = s.size();
        while(dem--) cout << "1";
        cout << endl;
        return;
    }
    s[pos] = '0';
    for(int i = pos + 1; i < s.size(); i++) s[i] ='1';
    cout << s << endl;
}

int main() {
    //read
    int t = 1; 
    cin >> t;
    while(t--){
        solve();
    }
}
