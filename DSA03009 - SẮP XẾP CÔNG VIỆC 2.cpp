#include <bits/stdc++.h>
#define f0(i, a) for(int i = 0; i < a; i++)
#define f1(i, a) for(int i = 1; i <= a; i++)
#define read freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#define ll long long
using namespace std;

bool cmp(pair<int, int> a, pair <int, int> b){
    if(a.second == b.second) return a.first > b.first;
    return a.second > b.second;
}

void solve(){
    int n; cin >> n; int max = 0;
    vector<pair<int, int>> v(n);
    f0(i, n){
        int c; 
        cin >> c >> v[i].first >> v[i].second;
        max = ::max(max, v[i].first);
    }
    sort(v.begin(), v.end(), cmp);
    bool choose[max + 1];
    memset(choose, false, sizeof(choose));
    pair<int, int> res = {0, 0};
    for(int i = 0; i < n; i++){
        for(int j = v[i].first; j >= 1; j--){
            if(!choose[j]){
                choose[j] = 1;
                res.first++;
                res.second += v[i].second;
                break;
            }
        }
    }
    cout << res.first << " " << res.second ;
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
