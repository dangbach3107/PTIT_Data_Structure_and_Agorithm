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
        for(int &x : a) cin >> x;
        bool check = 1;
        for(int i = 0; i < n;i++){
            if(a[i] != i + 1 && a[i] != n - i){
                check = 0;
            }
        }
        if(check) cout << "Yes\n";
        else cout << "No\n";
    }
}
