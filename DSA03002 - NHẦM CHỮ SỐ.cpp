#include <bits/stdc++.h>
#define f0(i, a) for(int i = 0; i < a; i++)
#define f1(i, a) for(int i = 1; i <= a; i++)
#define read freopen("input.txt", "r", stdin); freopen ("output.txt", "w", stdout);
using namespace std;

int main(){
    string a, b;
    cin >>a >> b;
    for(char &x : a) if(x == '6') x = '5';
    for(char &x : b) if(x == '6') x = '5'; 
    cout << stoi(a) + stoi(b) << " ";
    for(char &x : a) if(x == '5') x = '6';
    for(char &x : b) if(x == '5') x = '6';
    cout << stoi(a) + stoi(b) << " "; 
}
