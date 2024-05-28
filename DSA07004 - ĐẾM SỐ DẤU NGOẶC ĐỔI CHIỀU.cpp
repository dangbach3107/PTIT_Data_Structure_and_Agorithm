#include <bits/stdc++.h>
#define f0(i, a) for(int i = 0; i < a; i++)
#define f1(i, a) for(int i = 1; i <= a; i++)
#define read freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#define ll long long
using namespace std;

void solve(){
    string s; cin >> s;
    stack <char> st;
    int open = 0, close = 0;
    for(auto x : s){
        if(x == ')' && st.empty()){ 
            close++;
        }
        else if(x == ')' && !st.empty()) {st.pop(); open--;}
        else {st.push(x); open++;}
    }
    cout << open / 2 + close / 2 + open % 2 + close % 2;
}

int main(){
    //read
    int t; cin >> t;
    while(t--){
        solve();
        cout << endl;
    }
}
