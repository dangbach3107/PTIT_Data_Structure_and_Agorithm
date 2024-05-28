#include <bits/stdc++.h>
#define f0(i, a) for(int i = 0; i < a; i++)
#define f1(i, a) for(int i = 1; i <= a; i++)
#define read freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#define ll long long
using namespace std;
void solve(){
    int t; cin >> t; 
    queue <int> q;
    while(t--){
        int x; cin >> x;
        if(x == 1){
            cout << q.size() << endl;
        }
        else if(x == 2){
            if(q.empty()) cout << "YES\n";
            else cout << "NO\n";
        }
        else if(x == 3){
            int tmp; cin >> tmp;
            q.push(tmp);
        }
        else if(x == 4){
            if(!q.empty()) q.pop();
        }
        else if(x == 5){
            if(!q.empty()) cout << q.front() << endl;
            else cout << "-1" << endl;
        }
        else {
            if(!q.empty()) cout << q.back() << endl;
            else cout << "-1" << endl;
        }
    }
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
