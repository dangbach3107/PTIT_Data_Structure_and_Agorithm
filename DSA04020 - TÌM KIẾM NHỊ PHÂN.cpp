#include <iostream>
#include<string.h>
using namespace std;

int find(int a[],int l, int r, int k){
	//cout << 3456;
	if(l > r){
		return -1;
	}
	int mid = (l + r)/ 2;
	if(a[mid] == k){
		return mid;
	}
	else if(a[mid] > k){
		return find(a,l,mid - 1, k);
	}
	else return find(a, mid + 1, r, k);
}

int main() {
    int t; cin >> t;
	while(t--){
		int n, k; cin >> n >> k;
		int a[n];
		//cout << 1234;
		for(int i = 0; i < n; i++) cin >> a[i];
		int res = find(a, 0, n - 1, k);
		if(res == -1) cout << "NO\n";
		else cout << res + 1 << endl;
	}
}
