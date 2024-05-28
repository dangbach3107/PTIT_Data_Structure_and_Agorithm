#include <bits/stdc++.h>
#define f0(i, a) for(int i = 0; i < a; i++)
#define f1(i, a) for(int i = 1; i <= a; i++)
#define read freopen("input.txt", "r", stdin); freopen ("output.txt", "w", stdout);
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[10] = {1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};
        int dem = 0;
        for(int i = 9; i >= 0; i--){
            dem += n / a[i];
            n %= a[i];
        }
        cout << dem << endl;
    }
}
