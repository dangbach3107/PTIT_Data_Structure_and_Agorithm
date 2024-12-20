#include <bits/stdc++.h>
#define f0(i, a) for(int i = 0; i < a; i++)
#define f1(i, a) for(int i = 1; i <= a; i++)
#define read freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#define ll long long
using namespace std;

bool check(string s){
    if (s[0] == 'H' && s.back() == 'A' && s.find("HH") == -1)
        return 1;
    return 0;
}

int main(){
   // read 
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
    string v = "";
    for(int i = 0; i < n; i++){
        v += 'A';
    }
    v[0] = 'H';
    cout << v << endl;
    while(1){
        int pos = n - 1;
        while(pos > -1 && v[pos] == 'H'){
            v[pos] = 'A';
            pos--;
        }
        if(pos == -1) break;
        v[pos] = 'H';
        for(int  i = pos + 1; i < n; i++){
            v[i] = 'A';
        }
        if(check(v)) cout  << v << endl;
    }
    }
}
