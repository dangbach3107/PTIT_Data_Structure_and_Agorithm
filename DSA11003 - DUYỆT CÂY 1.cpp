#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

int in[1005], pre[1005], n;

struct node{
	int data;
	node *left, *right;
	node (int x){
		data = x;
		left = right = NULL;
	}
};

int tim(int a[], int key){
	for(int i = 1; i <= n; i++){
		if(a[i] == key) return i;
	}
	return 0;
}

void buildTree(node *root, int leftIndex, int rightIndex){
	int inPos = tim(in, root->data);
	int prePos = tim(pre, root->data);
	if(inPos > leftIndex){
		root->left = new node(pre[prePos + 1]);
		buildTree(root->left, leftIndex, inPos - 1);
	}
	if(inPos <  rightIndex){
		int soLuongTapTrai = inPos - leftIndex;
		root->right = new node(pre[prePos + 1 + soLuongTapTrai]);
		buildTree(root->right, inPos + 1, rightIndex);
	}
}

void posOrder(node *root){
	if(root == NULL) return;
	posOrder(root->left);
	posOrder(root->right);
	cout << root->data << ' ';
}

int main(){
	int t; cin >> t;
	while(t--){
		cin >> n;
		for(int i = 1; i <= n; i++) cin >> in[i];
		for(int i = 1; i <= n; i++) cin >> pre[i];
		node *root = new node(pre[1]);
		buildTree(root, 1, n);
		posOrder(root);
		cout << endl;
	}
}
