#include <bits/stdc++.h>
#define f0(i, a) for(int i = 0; i < a; i++)
#define f1(i, a) for(int i = 1; i <= a; i++)
#define read freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#define ll long long
using namespace std;

int n; 
int b[100], a[100];
vector<vector<string>> res;
void check(){
    vector<int> c;
    for(int i = 1; i <=n; i++){
        int x = a[i] * b[i];
        if(x > 0) c.push_back(x);
    }
    for(int i = 1; i < c.size(); i++){
        if(c[i] < c[i - 1]) return ;
    }
    if(c.size() < 2) return;
    vector<string> tmp;
    for(auto x : c){
        tmp.push_back(to_string(x));
    }
    res.push_back(tmp);
}

void Try(int i){
    for(int j = 0; j <= 1; j++){
        b[i] = j;
        if(i == n){
            check();
        }
        else Try(i + 1);
    }
}

void solve(){
    cin >> n;
    for(int i = 1; i <= n ; i++){
        cin >> a[i];
    }
    Try(1);
    sort(res.begin(), res.end());
    for(auto x : res){
        for(auto s : x) cout << s << ' ';
        cout << endl;
    }
}

int main(){
    //read
    int t = 1;
    //cin >> t;
    while(t--){
        solve();
        cout << endl;
    }
}
