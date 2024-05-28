#include <bits/stdc++.h>
#define f0(i, a) for(int i = 0; i < a; i++)
#define f1(i, a) for(int i = 1; i <= a; i++)
#define read freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#define ll long long
using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b){
    if(a.second != b.second) return a.second < b.second;
    else return a.first < b.first;
}

void solve(){
    int n;
    cin >> n;
    vector<pair<int, int>> v(n);
    for(auto &x : v){
        cin >> x.first >> x.second;
    }
    sort(v.begin(), v.end(), cmp);
    int tmp = v[0].second;
    int res = 1;
    for(int i = 1; i < n; i++){
        if(v[i].first >= tmp){
            tmp = v[i].second;
            res++;
        }
    }
    cout << res;
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
