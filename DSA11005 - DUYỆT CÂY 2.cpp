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

int tim(int a[], int leftIndex, int rightIndex, int key){
	for(int i = leftIndex; i <= rightIndex; i++){
		if(a[i] == key) return i;
	}
	return 0;
}

void buildTree(node *root, int leftIndex, int rightIndex){
	int inPos = tim(in, leftIndex, rightIndex, root->data); // 2
	int levelPos = tim(level, 1, n, root->data);

	if(inPos > leftIndex){
		int levelPosLeft = -1;
		for(int i = levelPos + 1; i <= n; i++){
			levelPosLeft = tim(in, leftIndex, inPos - 1, level[i]);
			if(levelPosLeft > 0) {
				root->left = new node(level[i]);
				buildTree(root->left, leftIndex, inPos - 1);
				break;
			}
		}
	}

	if(inPos < rightIndex){
		int levelPosRight = -1;
		for(int i = levelPos + 1; i <= n; i++){ 
			levelPosRight = tim(in, inPos + 1, rightIndex, level[i]);
			if(levelPosRight > 0){
				root->right = new node(level[i]);
				buildTree(root->right, inPos + 1, rightIndex);
				break;
			}
		}
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
		for(int i = 1; i <= n; i++) cin >> level[i];
		node *root = new node(level[1]);
		buildTree(root, 1, n);
		posOrder(root);
		cout << endl;
	}
}
