#include <bits/stdc++.h>
#define f0(i, a) for(int i = 0; i < a; i++)
#define f1(i, a) for(int i = 1; i <= a; i++)
#define read freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#define ll long long
using namespace std;

void tower(int n, char a, char b, char c){ // nguon, trung , dich
    if(n == 1){
        cout << a << " -> " << c << endl;
        return;
    }
    tower(n - 1, a, c, b);
    tower(1, a, b, c);
    tower(n - 1,b, a, c);
}

void solve(){
    int n ;cin >> n;
    tower(n, 'A', 'B', 'C');
}

int main(){
    //read
    int t = 1;
    //cin >> t;
    while(t--){
        solve();
        cout << endl;
    }
}
