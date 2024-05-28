#include <bits/stdc++.h>
#define f0(i, a) for(int i = 0; i < a; i++)
#define f1(i, a) for(int i = 1; i <= a; i++)
#define read freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#define ll long long
using namespace std;

int n, k; 
int c[100];
vector <string> v;

void Try(int i){
    for(int j = c[i - 1] + 1; j <= n - k + i; j++){
        c[i] = j;
        if(i == k){
            for(int z = 1; z <= k; z++){
                cout << v[c[z]] << " ";
            }
            cout << endl;
        }
        else Try(i + 1);
    }
}

void solve(){
    cin >> n >> k;
    set <string> s;
    while(n--){
        string x; cin >> x;
        s.insert(x);
    }
    vector<string> tmp(s.begin(), s.end());
    v = tmp;
    n = v.size();
    v.insert(v.begin(), "");
    Try(1);
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
