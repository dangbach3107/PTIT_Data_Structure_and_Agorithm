#include <bits/stdc++.h>
#define f0(i, a) for(int i = 0; i < a; i++)
#define f1(i, a) for(int i = 1; i <= a; i++)
#define read freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#define ll long long
using namespace std;

void solve(){
    int n; cin >> n;
    vector <int> a(n), le, chan;
    for(int i = 0; i < n; i++){ cin >> a[i];
        if((i + 1) & 1) le.push_back(a[i]);
        else chan.push_back(a[i]);
    }
    sort(le.begin(), le.end());
    sort(chan.begin(), chan.end(),greater<int>());
    int index1 = 0, index2 = 0;
    for(int i = 0; i < n; i++){
        int &x = a[i];
        if((i + 1) & 1){
            cout << le[index1++] << " ";
        }
        else cout << chan[index2 ++] << " ";
    }
    cout << endl;
}

int main() {
    //read
    int t = 1; 
    //cin >> t;
    while(t--){
        solve();
    }
}
