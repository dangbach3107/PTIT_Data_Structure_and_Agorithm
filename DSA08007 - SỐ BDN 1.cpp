#include <bits/stdc++.h>
#define f0(i, a) for(int i = 0; i < a; i++)
#define f1(i, a) for(int i = 1; i <= a; i++)
#define read freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#define ll long long
using namespace std;
void solve(){
    string n; cin >> n;
    queue <string> q;
    q.push("1");
    int dem = 0;
    while(1){
        dem++;
        string s = q.front();
        q.pop();
        if(stoll(s) > stoll(n) ){
            cout << dem - 1;
            return;
        }
        q.push(s + "0");
        q.push(s + "1");
    }
}

int main(){
   // read
    int t = 1;
    cin >> t;
    while(t--){
        solve();
        cout << endl;
    }
}
