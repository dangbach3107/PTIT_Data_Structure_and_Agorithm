#include <bits/stdc++.h>
#define f0(i, a) for(int i = 0; i < a; i++)
#define f1(i, a) for(int i = 1; i <= a; i++)
#define read freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#define ll long long
using namespace std;

void solve(){
    int n; cin >> n;
    string s = ""; 
    for(int  i = 1; i <=n; i++){
        s += "A";
    }
    while(1){
        cout << s << " ";
        int pos = n - 1;
        while(s[pos] == 'B' && pos > -1){
            s[pos] = 'A';
            pos--;
        }
        if(pos == -1) return;
        s[pos] = 'B';
    }
    
}

int main() {
   // read
    int t = 1; 
    cin >> t;
    while(t--){
        solve();cout << endl;
    }
}
