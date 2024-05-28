#include <bits/stdc++.h>
#define f0(i, a) for(int i = 0; i < a; i++)
#define f1(i, a) for(int i = 1; i <= a; i++)
#define read freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#define ll long long
using namespace std;

void solve(){
    int s, d; cin >> s >> d;
    if(s < 1 || 9 * d < s) {
        cout << -1;
        return;
    }
     string res = "";
    f0(i, d - 1){
        res = "0" + res;
    }
    res = "1" + res; s--;
    int key = d - 1;
    while(s > 0){
        if(res[key] != '9'){
            res[key]++;
            s--;
        }
        else key--;
    }
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
