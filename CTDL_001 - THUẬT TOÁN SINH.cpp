#include <bits/stdc++.h>
#define f0(i, a) for(int i = 0; i < a; i++)
#define f1(i, a) for(int i = 1; i <= a; i++)
#define read freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
using namespace std;

bool check(vector <int> v){
    for(int i = 0; i < v.size() / 2; i++){
        if(v[i] != v[v.size() - 1 - i]) return 0;
    }
    return 1;
}

int main() {
    int n; cin >> n;
    for(int i = 0; i < (1 << n); i++){
        vector <int> v;
        for(int j = 0; j < n; j++){
            if(i & (1 << j)) v.push_back(1);
            else v.push_back(0);
        }
        if(check(v)){ for(auto x : v) cout << x << " ";
        cout << endl;}
    }
}
