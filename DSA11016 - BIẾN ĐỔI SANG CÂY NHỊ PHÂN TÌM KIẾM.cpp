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

void inOrder(node *root){
	if(root != NULL){
		inOrder(root->left);
		cout << root->data << ' ';
		inOrder(root->right);
	}
}

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		set<int> s;
		while(n--){
			int x, y;
			char c; cin>> x >> y >> c;
			s.insert(x); s.insert(y);
		}
		for(auto x : s) cout << x << ' ';
		cout << endl;
	}
}
