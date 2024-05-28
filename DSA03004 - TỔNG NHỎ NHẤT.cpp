#include <bits/stdc++.h>
#define f0(i, a) for(int i = 0; i < a; i++)
#define f1(i, a) for(int i = 1; i <= a; i++)
#define read freopen("input.txt", "r", stdin); freopen ("output.txt", "w", stdout);
using namespace std;

int main(){
    //read
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[n];
        for(auto &x : a) cin >> x;
        sort(a, a + n);
        string c = "", b = "";
        for(int i = 0; i < n; i++){
            if(i & 1) c += to_string(a[i]);
            else b += to_string(a[i]);
        }
        cout << stoll(c) + stoll(b) << endl;
    }
}
