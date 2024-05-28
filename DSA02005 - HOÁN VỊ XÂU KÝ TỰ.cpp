#include <bits/stdc++.h>
#define f0(i, a) for(int i = 0; i < a; i++)
#define f1(i, a) for(int i = 1; i <= a; i++)
#define read freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#define ll long long
using namespace std;

int n;
int a[20], b[20];
string s;

void Try(int i){
    for(int j = 1; j <= n; j++){ 
        if(!b[j]){
            a[i] = j;
            b[j] = 1;
            if(i == n){
                for(int k = 1; k <=n ; k++){
                    cout << s[a[k]];
                }
                cout << " ";
            }
            else Try(i + 1);
            b[j] = 0;
        }
    }
}

void solve(){
    cin >> s; n = s.size();
    s = "0" + s;
    Try(1);
    cout << endl;
}

int main(){
   // read
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}
