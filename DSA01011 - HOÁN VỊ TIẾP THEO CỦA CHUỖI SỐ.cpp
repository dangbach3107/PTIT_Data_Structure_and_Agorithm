#include <bits/stdc++.h>
#define f0(i, a) for(int i = 0; i < a; i++)
#define f1(i, a) for(int i = 1; i <= a; i++)
#define read freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#define ll long long
using namespace std;

void solve(){
    int stt;
    string s; cin >> stt >> s;
    cout << stt << " ";
    if(next_permutation(s.begin(), s.end()) == 0) cout << "BIGGEST\n";
    else cout << s << endl;
}

int main(){
    //read
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}
