#include <bits/stdc++.h>
#define f0(i, a) for(int i = 0; i < a; i++)
#define f1(i, a) for(int i = 1; i <= a; i++)
#define read freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#define ll long long
using namespace std;

bool check(string s){
    stack <char> st;
    for(auto x : s){
        if(x == '[' || x == '{' || x == '(') st.push(x);
        else{
            if(!st.empty()){
                char tmp = st.top();
                if(x == ')' && tmp == '(') st.pop();
                else if(x == '}' && tmp == '{') st.pop();
                else if(x == ']' && tmp == '[') st.pop();
                else return 0;
            }
        }
    }
    return 1;
}

void solve(){
    string s; cin >> s;
    if(check(s)) cout << "YES";
    else cout << "NO";
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
