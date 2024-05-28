#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

int in[1005], level[1005], n;

struct node{
	int data;
	node *left, *right;
	node (int x){
		data = x;
		left = right = NULL;
	}
};

void build_BST(node *root, int key){
	if(key < root->data && root->left == NULL) root->left = new node(key);
	else if(key < root->data) build_BST(root->left, key);
	else if(key > root->data && root->right == NULL) root->right = new node(key);
	else if(key > root->data) build_BST(root->right, key);
}

void postOrder(node *root){
	if(root == NULL) return;
	postOrder(root->left);
	postOrder(root->right);
	cout << root->data << ' ';
}

int main(){
	int t; cin >> t;
	while(t--){
		int n, x; cin >> n;
		n--; cin >> x;
		node *root = new node(x);
		while(n--){
			cin >> x;
			build_BST(root, x);
		}
		postOrder(root);
		cout << endl;
	}
}
