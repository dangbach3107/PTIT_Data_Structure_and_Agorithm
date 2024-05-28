#include <bits/stdc++.h>
#define f0(i, a) for(int i = 0; i < a; i++)
#define f1(i, a) for(int i = 1; i <= a; i++)
#define read freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#define ll long long
using namespace std;

void solve(){
    int n, k; cin >> n >> k;
    set<int> s; 
    while(n--){
        int x; cin >> x;
        s.insert(x);

    }
    n = s.size();
    vector<int> v(s.begin(), s.end());
    v.insert(v.begin(), 0);
    vector<int> c(k+ 1);
    for(int i = 1; i <= k; i++){
        c[i] = i; cout << v[c[i]]<< " ";
    }
    while(1){
        int pos  = k;
        while(c[pos] == n - k + pos && pos > 0){
            pos--;
        }
        if(pos == 0) break;
        c[pos]++;
        for(int j = pos+ 1; j <= k; j++){
            c[j] = c[j - 1] + 1;
        }
        cout << endl;
        for(int i = 1; i <= k; i++){
         cout << v[c[i]] << " ";
    }
    }
}

int main(){
    //read
    int t = 1;
     //cin >> t;
    while(t--){
        solve();
    }
}
