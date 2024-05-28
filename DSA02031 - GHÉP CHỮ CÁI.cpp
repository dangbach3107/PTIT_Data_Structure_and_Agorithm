#include <bits/stdc++.h>
#define f0(i, a) for(int i = 0; i < a; i++)
#define f1(i, a) for(int i = 1; i <= a; i++)
#define read freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#define ll long long
using namespace std;

bool is(char a){
    if(a == 'A' || a == 'E') return 1;
    return 0;
}

bool check(string s){
    for(int i = 1; i < s.size() - 1; i++){
        if(is(s[i]) && !is(s[i-1]) && !is(s[i+1])) return 0;
    }
    return 1;
}

void solve(){
    char x; cin >> x;
    string s;
    for(char t = 'A'; t <= x; t++) s+=t;
    if(check(s))cout << s << endl;
    while(next_permutation(s.begin(), s.end())){
        if(check(s))cout << s << endl;
    }
}

int main(){
    
    int t = 1;
    //cin >> t;
    while(t--){
        solve();
        cout << endl;
    }
}
