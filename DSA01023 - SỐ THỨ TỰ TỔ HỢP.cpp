#include <bits/stdc++.h>
#define f0(i, a) for(int i = 0; i < a; i++)
#define f1(i, a) for(int i = 1; i <= a; i++)
#define read freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#define ll long long
using namespace std;

int next_combination(vector <int> &a, int n){
    int pos = a.size() - 1;
    while(a[pos] == n - a.size() + pos + 1 && pos > -1){
        pos--;
    }
    if(pos == -1) return 0;
    a[pos]++;
    for(int i = pos + 1; i < a.size();i ++){
        a[i] = a[i - 1] + 1;
    }
    return 1;
}

void solve(){
    int n; cin >> n; int k ; cin >> k;
    vector<int> a(k), b(k);
    for(auto &x : a) cin >> x;
    int dem = 1;
    for(int i = 0; i < k; i++){
        b[i] = i + 1;
    }
    if(b == a) {
        cout << 1 << endl;
        return;
    }
    while(next_combination(b, n)){
        dem++;
        if(b == a) {cout << dem << endl;
        return;}
    }
}

int main(){
    //read
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}
