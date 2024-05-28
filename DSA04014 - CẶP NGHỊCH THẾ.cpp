#include <bits/stdc++.h>
#define f0(i, a) for(int i = 0; i < a; i++)
#define f1(i, a) for(int i = 1; i <= a; i++)
#define read freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#define ll long long
using namespace std;

long long merge(vector<long long> &v, int l, int r, int m){
    vector <long long >a, b;
    for(int i = l; i <= m; i++) a.push_back(v[i]);
    for(int i = m + 1; i <= r; i++) b.push_back(v[i]);
    long long dem = 0;
    int i = 0, j = 0, k = l; 
    while(i < a.size() && j < b.size()){
        if(a[i] > b[j]){
            dem += a.size() - i;
            v[k++] = b[j++];
        }
        else v[k++] = a[i++];
    }
    while(i < a.size()) v[k++] = a[i++];
    while(j < b.size()) v[k++] = b[j++];
    return dem;
}

long long mergeSort(vector<long long> &v, int l, int r){ 
    long long res = 0;
    if(l < r){ 
        int m = (l + r) / 2;
        res += mergeSort(v, l, m);
        res += mergeSort(v, m + 1, r);
        res += merge(v, l, r, m);
    }
    return res;
}

void solve(){
    int n; cin >> n;
    vector <long long> v(n);
    for(auto &x : v) cin >> x;
    cout << mergeSort(v, 0, n - 1);
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
