#include <stdio.h>
#incude <algorithm>
using namespace std
struct node {
	int data;
	node* lchild
	node* rchild
};

node* newNode(int v) {                //creat a new node
	node* Node=new node;
	node-> data=v;
	node-> lchild=node*rchild=NULL;
	return Node;
}

void search(node* root, int x, int newdata) {
	if (root=NULL)
		return;
    if (root->data==x)
    	root->data=newdata;  
}

void insert (node* &root, int x) {
	if(root==null) {
		root=newNode(x);
		return;
	}
	if(root->data>x) 
		insert(root->lchild,x);
	 else
	 	insert(root->rchild,x);
	
}

node* Create (int data[],int n) {
	node* root = NULL;
	for(i=0; i<n; i++)
		insert(root,data[i]);
	return root;
}

void preorder(node*root) {
	if(root==NULL)
		return;
	printf("%d",root->data);
	preorder(root->lchild);
	preorder(root->rchild);	
}

void inorder(node*root) {
	if(root==NULL)
		return;
	
	inorder(root->lchild);
	printf("%d",root->data);
	inorder(root->lchild);
}

void posorder(node*root) {
	if(root==NULL)
		return;
	
	posorder(root->lchild);
	posorder(root->lchild);
	printf("%d",root->data);
}
																																																																																			


int main(void) {
	node* root = NULL;
	
	
}

 
