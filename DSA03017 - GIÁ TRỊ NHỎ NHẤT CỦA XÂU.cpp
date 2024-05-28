#include <bits/stdc++.h>
#define f0(i, a) for(int i = 0; i < a; i++)
#define f1(i, a) for(int i = 1; i <= a; i++)
#define read freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#define ll long long
using namespace std;

void solve(){
    int k; cin >> k;
    string s; cin >> s;
    map <char, int> m;
    for(auto x :s) m[x]++;
    priority_queue<int, vector<int>> q;
    for(auto x : m) q.push(x.second);
    while(k--){
        int tmp = q.top(); q.pop();
        tmp--;
        q.push(tmp);
    }
    int res = 0;
    while(!q.empty()) {res += q.top() * q.top(); q.pop();}
    cout << res;
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
