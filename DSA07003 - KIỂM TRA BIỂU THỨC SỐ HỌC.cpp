#include <bits/stdc++.h>
#define f0(i, a) for(int i = 0; i < a; i++)
#define f1(i, a) for(int i = 1; i <= a; i++)
#define read freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#define ll long long
using namespace std;

void solve(){
    string s; getline(cin, s);
    stack<char> st;
    for(auto x : s){
        if(x == '(' || x == '+' || x == '-' || x == '*' || x == '/') st.push(x);
        else if(x == ')'){
            char tmp = st.top();
            st.pop();
            if(tmp == '(') {
                cout << "Yes";
                return;
            }
            else{
                while(st.top() != '(' && st.size()) st.pop();
                st.pop();
            }
        }
    }
    cout << "No";
}

int main(){
   // read
    int t = 1;
    cin >> t; cin.ignore();
    while(t--){
        solve();
        cout << endl;
    }
}
