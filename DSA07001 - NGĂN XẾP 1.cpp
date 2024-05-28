#include <bits/stdc++.h>
#define f0(i, a) for(int i = 0; i < a; i++)
#define f1(i, a) for(int i = 1; i <= a; i++)
#define read freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#define ll long long
using namespace std;
 string st[1005];

void solve(){
    string s;
    int size = 0;
    while(getline(cin , s)){
        if(s[0] == 's'){
            if(size > 0){
                for(int i = 0; i < size; i++){
                    cout << st[i] << " ";
                    
                }cout << endl;
            }
            else cout << "empty\n";
        }
        else{
            if(s[1] == 'u'){
                string token;
                stringstream ss(s);
                while(ss >> token);
                st[size++] = token;
            }
            else{
                size--;
            }
        }
    }
}

int main(){
    //read
    int t = 1;
    //cin >> t;
    while(t--){
        solve();
        cout << endl;
    }
}
