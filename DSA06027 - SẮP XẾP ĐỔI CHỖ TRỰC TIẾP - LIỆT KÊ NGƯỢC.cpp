#include <bits/stdc++.h>
#define f0(i, a) for(int i = 0; i < a; i++)
#define f1(i, a) for(int i = 1; i <= a; i++)
#define read freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
using namespace std;

void solve(){
    int n; cin >> n;
    vector <int> a(n);
    for(auto &x : a) cin >> x; 
    vector<vector<int> >v;  int cnt = 0;
    for(int i = 0 ; i < n; i++){
        int check = 1;
        for(int j = i + 1; j < n; j++){
            if(a[i] > a[j]) {
                swap(a[i], a[j]);
                check = 0;

            }
        }
        if(check == 0){v.push_back(a); cnt++;}
    }
    for(int i = cnt - 1; i >= 0; i--){
        cout << "Buoc " << i + 1 << ": ";
        for(auto x : v[i]) cout << x << " ";
        cout << endl;
    }
}

int main() {
    //read
    int t = 1; 
    cin >> t;
    while(t--){
        solve();
    }
}
