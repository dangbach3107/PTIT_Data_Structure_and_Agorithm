#include <bits/stdc++.h>
#define f0(i, a) for(int i = 0; i < a; i++)
#define f1(i, a) for(int i = 1; i <= a; i++)
#define read freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#define ll long long
using namespace std;

void solve(){
    int n; cin >> n;
    vector<int> a(n), b; 
    for(auto &x : a) cin >> x;
    int dem = 1;
    b= a;
    sort(begin(b), end(b));
    if(b == a) {
        cout << 1 << endl;
        return;
    }
    while(next_permutation(begin(b), end(b))){
        dem++;
        if(b == a) {cout << dem << endl;
        return;}
    }
}

int main(){
   // read
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}
