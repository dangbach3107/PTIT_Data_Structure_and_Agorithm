#include <bits/stdc++.h>
#define f0(i, a) for(int i = 0; i < a; i++)
#define f1(i, a) for(int i = 1; i <= a; i++)
#define read freopen("input.txt", "r", stdin); freopen ("output.txt", "w", stdout);
using namespace std;

void solve(){
    int n; cin >> n;
    vector <int> a(n), b; 
    for(auto &x : a) cin >> x;
    b = a;
    sort(a.begin(), a.end());
    int l = 0, r = n - 1;
    while(a[l] == b[l]) l++;
    while(a[r] == b[r]) r--;
    cout << l + 1 << " " << r + 1 << endl;
}

int main(){
    //read
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}
