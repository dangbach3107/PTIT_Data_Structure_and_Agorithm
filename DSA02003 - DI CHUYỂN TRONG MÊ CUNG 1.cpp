#include <bits/stdc++.h>
#define f0(i, a) for(int i = 0; i < a; i++)
#define f1(i, a) for(int i = 1; i <= a; i++)
#define read freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#define ll long long
using namespace std;

int n;
int a[20][20];
vector <string> v;

void Try(int i, int j, string s){
    if(i == n && j == n){
        v.push_back(s);
        return;
    }
    if(i < n && a[i + 1][j]){
        Try(i + 1, j, s + 'D');
    }
    if(j < n && a[i][j + 1]){
        Try(i, j + 1, s + 'R');
    }
    return;
}

void solve(){
    v.clear();
    cin >> n;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++) cin >> a[i][j];
    }
    Try(1, 1, "");
    if(a[1][1] == 0 || v.empty()) cout << "-1"; 
    else for(auto x : v){
        cout << x << " ";
    }
    cout << endl;
}

int main(){
   // read
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}
