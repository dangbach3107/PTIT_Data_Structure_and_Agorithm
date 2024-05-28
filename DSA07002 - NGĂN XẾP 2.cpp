#include <bits/stdc++.h>
#define f0(i, a) for(int i = 0; i < a; i++)
#define f1(i, a) for(int i = 1; i <= a; i++)
#define read freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#define ll long long
using namespace std;

void solve(){
    stack <string> st;
    string s; int n; cin >> n;
    cin.ignore(); 
    int size = 0;
    while(n--){
        getline(cin, s);
        if(s[1] == 'R'){
            if(st.empty()){
                cout << "NONE\n";
                continue;
            }
            cout << st.top() << endl;
        }
        else{
            if(s[1] == 'U'){
                string token;
                stringstream ss(s);
                while(ss >> token);
                st.push(token);
            }
            else{
                if(!st.empty()){
                    st.pop();
                }
            }
        }
    }
}

int main(){
  //  read
    int t = 1;
    //cin >> t;
    while(t--){
        solve();
        cout << endl;
    }
}
