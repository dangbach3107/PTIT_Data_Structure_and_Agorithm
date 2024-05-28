#include <bits/stdc++.h>
#define f0(i, a) for(int i = 0; i < a; i++)
#define f1(i, a) for(int i = 1; i <= a; i++)
#define read freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b){
    if(a.second != b.second){
        return a.second > b.second;
    }
    else return a.first < b.first;
} 

void solve() {
    int n; cin >> n;
    map <int, int> mp;
    vector <pair<int, int>> v;
    while(n--){
        int x; cin >> x;
        mp[x]++;
    }
    for(auto x : mp){
        pair<int, int> tmp = {x.first, x.second};
        v.push_back(tmp);
    }
    sort(v.begin(), v.end(), cmp);
    for(auto x : v){
        while(x.second--){
            cout << x.first << " " ;
        }
    }
    cout << endl;
}

int main() {
    //read
    int t = 1;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}
