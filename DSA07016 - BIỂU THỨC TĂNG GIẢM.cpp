#include<bits/stdc++.h>
using namespace std;

void solve(){
	string s; cin >> s;
    stack <int> st;
    int dem = 1;
    st.push(dem);
 
    for(auto x : s){
        if(x == 'D'){
            st.push(++dem);
        }
        else{
            while(!st.empty()){
                cout << st.top(); st.pop();
            }
            st.push(++dem);
        }
    }
    while(!st.empty()){
        cout << st.top(); st.pop();
    }
}

int main() {
	int t; cin >> t;
	while (t--) {
		solve();
		cout << endl;
	}
}
