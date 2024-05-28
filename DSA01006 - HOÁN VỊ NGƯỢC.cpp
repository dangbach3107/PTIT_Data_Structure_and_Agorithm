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
        s += to_string(i);
    }
    vector<string> v;
    v.push_back(s);
    while(next_permutation(begin(s), end(s))){
        v.push_back(s);
    }
    for(int i = v.size() - 1; i >= 0; i--){
        cout << v[i] <<  ' ';
    }
    cout << endl;
}

int main() {
    //read
    int t = 1; 
    cin >> t;
    while(t--){
        solve();
    }
}
