#include <bits/stdc++.h>
#define f0(i, a) for(int i = 0; i < a; i++)
#define f1(i, a) for(int i = 1; i <= a; i++)
#define read freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#define ll long long
using namespace std;

int n;
vector<int> a, b;

void in(){
    cout << "[";
    for(int i = 0; i < a.size(); i++){
        cout << a[i];
        if(i != a.size() - 1) cout << " "; 
    }
    cout <<"]\n";
}

void Try(int i){
    in();
    b.resize(i - 1);
    for(int j = 0; j < i - 1; j++){
        b[j] = a[j] + a[j + 1];
    }
    if(i == 1) return;
    a = b;
    a.resize(i - 1);
    b.clear();
    Try(i - 1);
    
}

void solve(){
    cin >> n;
    a.resize(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    Try(n);
}

int main(){
    //read
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}
