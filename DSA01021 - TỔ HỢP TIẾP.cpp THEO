#include <bits/stdc++.h>
#define f0(i, a) for(int i = 0; i < a; i++) 
#define f1(i, a) for(int i = 1; i <= a; i++)
#define read freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#define ll long long
using namespace std;

void solve(){
    int n, k; cin >> n >> k;
    vector<int> a(k);
    set<int> s;
    for(auto &x : a) {
        cin >> x;
        s.insert(x);
    }
    int pos = k - 1;
    while(a[pos] == n - k + pos + 1 && pos > -1) {
        pos--;
    }
    if(pos == -1){
        cout << k << endl;
        return;
    }
    a[pos]++;
    for(int i = pos + 1; i < k; i++){
        a[i] = a[i - 1] + 1;
    }
    int dem= 0;
    for(int i = 0; i < k ;i++){
        if(s.find(a[i]) == s.end()) dem++;
    }
    cout << dem <<endl;
}

int main() {
  //  read
    int t = 1; 
    cin >> t;
    while(t--){
        solve();
    }
}
