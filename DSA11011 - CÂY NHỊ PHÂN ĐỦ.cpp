#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

struct node{
	int data;
	node *left;
	node *right;
	//constructor
	// node (int x){
	// 	data = x;
	// 	left = right = NULL;
	// }
};

node *makeNode(int x){
	node *newNode = new node();
	newNode -> data = x;
	newNode -> left = newNode -> right = NULL;
	return newNode;
}
// sau khi tim duoc node cha
void makeRoot(node *root, int u, int v, char c){
	if(c == 'L') root->left = makeNode(v);
	else root->right = makeNode(v);
}

void insertNode(node *root, int u, int v, char c){
	if(root == NULL) return;
	if(root->data == u){
		makeRoot(root, u, v, c);
	}
	else{
		insertNode(root->left, u, v, c);
		insertNode(root->right, u, v, c);
	}
}

void inOrder(node *root){
	if(root != NULL){
		inOrder(root->left);
		cout << root->data << ' ';
		inOrder(root->right);
	}
}

void preOrder(node *root){
	if(root != NULL){		
		preOrder(root->left);
		preOrder(root->right);
		cout << root->data << ' ';
	}
}

void posOrder(node *root){
	if(root != NULL){
		cout << root->data << ' ';
		posOrder(root->left);
		posOrder(root->right);
	}
}

void levelOrder(node *root){
	queue <node*> q;
	q.push(root);
	while(!q.empty()){
		node *tmp = q.front(); q.pop();
		cout << tmp->data <<" ";
		if(tmp->left != NULL){
			q.push(tmp->left);
		}
		if(tmp->right != NULL){
			q.push(tmp->right);
		}
	}
	cout << endl;
}

void spiralOrder(node *root){
	stack <node*> s1, s2;
	s1.push(root);
	while(!s1.empty() || !s2.empty()){
		while(!s1.empty()){
			node *tmp = s1.top(); s1.pop();
			cout << tmp->data << ' ';
			if(tmp->right != NULL) s2.push(tmp->right);
			if(tmp->left != NULL) s2.push(tmp->left); 
		}
		while(!s2.empty()){
			node *tmp = s2.top(); s2.pop();
			cout << tmp->data << ' ';
			if(tmp->left != NULL) s1.push(tmp->left);
			if(tmp->right != NULL) s1.push(tmp->right); 
		}
	}
	cout << endl;
}

int countLeaf(node *root){
	if(root == NULL) return 0; 
	if(root -> left == NULL && root->right == NULL){
		return 1;
	}
	return countLeaf(root->left) + countLeaf(root->right);
}

bool isFullBinTree(node *root){
	if(root == NULL) return 1;
	if(root->left == NULL && root->right == NULL) return 1;
	if(!(root->left != NULL && root->right != NULL)) return 0;
	return isFullBinTree(root->left) && isFullBinTree(root->right);
}

int main(){
	int t; cin>>t;
	while(t--){
		int n; cin >> n;
		node *root = NULL;
		while(n--){
			int u, v; char c; cin >> u >> v >> c;
			if(root == NULL){
				root = makeNode(u);
				makeRoot(root, u, v, c);
			}
			else insertNode(root, u, v, c);
		}
		cout << isFullBinTree(root) << endl;
	}
}
