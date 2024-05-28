#include <bits/stdc++.h>
#define f0(i, a) for(int i = 0; i < a; i++)
#define f1(i, a) for(int i = 1; i <= a; i++)
#define read freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#define ll long long
using namespace std;

void solve(){
    int n; cin >> n;
    int a[n + 1];
    int tmp = 0;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
        if(a[i] == 0) tmp++;
    }
    cout << tmp;
}

int main(){
 //   read
    int t = 1;
    cin >> t;
    while(t--){
        solve();
        cout << endl;
    }
}
