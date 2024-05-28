#include <bits/stdc++.h>
#define f0(i, a) for(int i = 0; i < a; i++)
#define f1(i, a) for(int i = 1; i <= a; i++)
#define read freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#define ll long long 
using namespace std;

bool check(string s){
    if (s[0] == '8' && s.back() == '6' && s.find("88") == -1 && s.find("6666") == -1)
        return 1;
    return 0;
}

int main(){
    //read
    int t = 1;
    // cin >> t;
    while(t--){
        int n; cin >> n;
    string v = "";
    for(int i = 0; i < n; i++){
        v += '6';
    }
    while(1){
        int pos = n - 1;
        while(pos > -1 && v[pos] == '8'){
            v[pos] = '6';
            pos--;
        }
        if(pos == -1) break;
        v[pos] = '8';
        for(int  i = pos + 1; i < n; i++){
            v[i] = '6';
        }
        if(check(v)) cout  << v << endl;
    }
    }
}
