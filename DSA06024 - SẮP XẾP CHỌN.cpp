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
    int a[n];
    for(auto &x : a) cin >> x;
    for(int i = 0 ; i < n - 1; i++){
        int index = i;
        for(int j = i + 1; j < n ; j++){
            if(a[index] > a[j]) index = j;
        }
        swap(a[i], a[index]);
        cout << "Buoc " << to_string(i + 1) << ": ";
        for(auto x : a ) cout << x << " ";
        cout << endl;
    }

}
