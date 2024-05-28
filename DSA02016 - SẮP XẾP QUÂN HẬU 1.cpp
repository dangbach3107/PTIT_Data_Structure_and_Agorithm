#include <bits/stdc++.h>
#define f0(i, a) for(int i = 0; i < a; i++)
#define f1(i, a) for(int i = 1; i <= a; i++)
#define read freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#define ll long long
using namespace std;

int n, dem;
int a[15], doc[15], xuoi[20], nguoc[20];

void Try(int i){
    for(int j = 1; j <= n; j++){
        if(!doc[j] && !xuoi[i - j + n] && !nguoc[i + j - 1]){
            a[i] = j;
            doc[j] = xuoi[i - j + n] = nguoc[i + j - 1] = 1;
            if(i == n) dem++;
            else Try(i + 1);
            doc[j] = xuoi[i - j + n] = nguoc[i + j - 1] = 0;
        }
    }
}

void solve(){
    cin >> n;
    dem = 0;
    Try(1);
    cout << dem;
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
