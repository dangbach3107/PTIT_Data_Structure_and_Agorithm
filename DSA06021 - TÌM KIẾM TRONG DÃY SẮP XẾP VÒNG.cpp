#include <bits/stdc++.h>
#define f0(i, a) for(int i = 0; i < a; i++)
#define f1(i, a) for(int i = 1; i <= a; i++)
#define read freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
using namespace std;

void solve(){
    int n; cin >> n;int k ;cin >> k;
    vector <int> a(n), b;
    for(auto &x : a) cin >> x ;
    b = a; 
    sort(b.begin(), b.end());
    int index = upper_bound(b.begin(), b.end(), k) - b.begin();
    int index2 = upper_bound(b.begin(), b.end(), a[0]) - b.begin();
    if(k <= a[0])
    cout << index + index2 + 1<< endl;
    else cout << index - index2  + 1<< endl;
}

int main() {
    
    int t = 1; 
    cin >> t;
    while(t--){
        solve();
    }
}
