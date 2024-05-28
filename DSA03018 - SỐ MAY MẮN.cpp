#include <bits/stdc++.h>
#define f0(i, a) for(int i = 0; i < a; i++)
#define f1(i, a) for(int i = 1; i <= a; i++)
#define read freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#define ll long long
using namespace std;

void solve(){
    int n; cin >> n;
    int four = n % 7;
    int seven = n / 7;
    while(four % 4 != 0 && seven > 0){
        four += 7;
        seven--;
    }
    if(four % 4 == 0) four /= 4;
    else{
        cout << -1;
        return;
    }
    while(four--) cout << 4;
    while(seven--) cout << 7;
}

int main(){ 
    //read
    int t = 1;
    cin >> t; 
    while(t--){
        solve();
        cout << endl;
    }
}
