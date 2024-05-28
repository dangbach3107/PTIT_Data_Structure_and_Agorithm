#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
int n, a[1000];
int check(int a[]){
	for(int i = 1; i < n; i++){
		if(a[i] > a[i + 1]) return 0;
	}
	return 1;
}

int main(){
	int t; cin >> t;
	while(t--){
		cin >> n;
		for(int i = 1; i <= n; i++) cin >> a[i];
		cout << check(a) << endl;
	}
}
