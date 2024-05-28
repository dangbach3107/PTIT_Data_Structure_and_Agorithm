#include <bits/stdc++.h>
#define f0(i, a) for(int i = 0; i < a; i++)
#define f1(i, a) for(int i = 1; i <= a; i++)
#define read freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#define ll long long
using namespace std;

string s; 
    char x; int k;

void Try(char i){
    for(char j = i ; j <= x; j++){
        s.push_back(j);
        if(s.size() == k) cout << s << endl;
        else Try(j);
        s.pop_back();
    }
}

void solve(){
    cin >> x >> k;
    Try('A');
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
