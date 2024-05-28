#include <bits/stdc++.h>
#define f0(i, a) for(int i = 0; i < a; i++)
#define f1(i, a) for(int i = 1; i <= a; i++)
#define read freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#define ll long long
using namespace std;

void solve(){
    string a, b; cin >> a >> b;
    int max = 0;
    vector <vector<int>> dp(a.size() + 1, vector<int> (b.size() + 1, 0));
    for(int i = 1; i <= a.size(); i++){
        for(int j = 1; j <= b.size(); j++){
            if(a[i - 1] == b[j - 1]) {
                dp[i][j] = dp[i - 1][j - 1] + 1;
                max = ::max(max, dp[i][j]);
            }
            else dp[i][j] = ::max(dp[i - 1][j], dp[i][j - 1]);
        }
    }
    cout << max;
}

int main(){
    //read
    int T = 1;
    cin >> T;
    while(T--){
        solve();
        cout << endl;
    }
}
