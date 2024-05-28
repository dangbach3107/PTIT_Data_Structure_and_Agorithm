#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

struct node{
	int data;
	node *left;
	node *right;
	//constructor
	node (int x){
		data = x;
		left = right = NULL;
	}
};

// node *makeNode(int x){
// 	node *newNode = new node();
// 	newNode -> data = x;
// 	newNode -> left = newNode -> right = NULL;
// 	return newNode;
// }
// sau khi tim duoc node cha
void makeRoot(node *root, int u, int v, char c){
	if(c == 'L') root->left = new node(v);
	else root->right = new node(v);
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

void levelOrder(node *root){
	queue <node*> q;
	q.push(root);
	cout << root->data <<" ";
	while(!q.empty()){
		node *tmp = q.front(); q.pop();
		if(tmp->left != NULL){
			cout << tmp->left->data <<' ';
			q.push(tmp->left);
		}
		if(tmp->right != NULL){
			cout << tmp->right->data <<' ';
			q.push(tmp->right);
		}
	}
	cout << endl;
}

int main(){
	int t; cin>>t;
	while(t--){
		int n; cin >> n;
		node *root = NULL;
		while(n--){
			int u, v; char c; cin >> u >> v >> c;
			if(root == NULL){
				root = new node(u);
				makeRoot(root, u, v, c);
			}
			else insertNode(root, u, v, c);
		}
		levelOrder(root);
	}
}
