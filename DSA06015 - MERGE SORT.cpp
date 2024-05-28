#include <bits/stdc++.h>
#define f0(i, a) for(int i = 0; i < a; i++)
#define f1(i, a) for(int i = 1; i <= a; i++)
#define read freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
using namespace std;

void merge(vector<int> &a, int l, int r, int m) {
    vector<int> x, y;
    for(int i = l; i <= m; i++) x.push_back(a[i]);
    for(int i = m + 1; i <= r; i++) y.push_back(a[i]);
    int index = l, i = 0, j = 0;
    while(i < x.size() && j < y.size()) {
        if(x[i] < y[j]) a[index++] = x[i++];
        else a[index++] = y[j++];
    }
    while(i < x.size()) a[index++] = x[i++];
    while(j < y.size()) a[index++] = y[j++];
}

void mergeSort(vector<int> &a, int l, int r) {
    if(l >= r) return; 
    int m = (l + r) / 2;
    mergeSort(a, l, m);
    mergeSort(a, m + 1, r);
    merge(a, l, r, m);
}

void solve() {
    int n; cin >> n;
    vector<int> v(n);
    for (auto &x : v) cin >> x;
    mergeSort(v, 0, n - 1);
    for (auto x : v) cout << x << " ";
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
