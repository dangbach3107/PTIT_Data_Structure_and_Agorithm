#include <bits/stdc++.h>
#define f0(i, a) for(int i = 0; i < a; i++)
#define f1(i, a) for(int i = 1; i <= a; i++)
#define read freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#define ll long long
using namespace std;

int n, k, check;
int a[105], b[105];

void in(){
    vector<int> v;
    for(int i = 1; i <=n ; i++){
        if(b[i]) v.push_back(a[i]);
    }
    cout << "[";
    for(int i = 0; i < v.size(); i++){
        cout << v[i] ;
        if(i != v.size() - 1) cout << " ";
    }
    cout << "] ";
}

void Try(int i){
    for(int j = 1; j >= 0; j--){
        b[i] = j;
        if(i == n) {
            int sum = 0;
            for(int z = 1; z <= n; z++){
                sum += a[z] * b[z];

            }if(sum == k){
                in();
                check = 1;
            }
            
        }
        else Try(i + 1);
    }
}

void solve(){
    check = 0;
    cin >> n >> k;
    for(int i = 1; i <= n; i++) cin >> a[i];
    sort(a + 1, a + n + 1);
    Try(1);
    if(!check) cout << "-1";
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
