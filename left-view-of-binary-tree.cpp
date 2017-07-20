#include<iostream>
#include<stdlib.h>
using namespace std;
struct node {
	int data;
	node * left;
	node *right;
};
struct node * newnode(int data){
	node *temp=new node;
	temp->data=data;
	temp->left=NULL;
	temp->right=NULL;
}
void leftview(node *root){
	if(root==NULL){
		return ;
	}
	else{
		cout<<root->data<<endl;
		if(root->left !=NULL && root->right!=NULL){
			leftview(root->left);
			
		}
		else if(root->left==NULL && root->right!=NULL){
			leftview(root->right);
		}
	}
}
int main(){
	struct node * root=newnode(1);
	root->left=newnode(2);
	root->right=newnode(3);
	root->left->left=newnode(4);
	root->left->right=newnode(5);
	root->left->left->right=newnode(8);
	root->right->left=newnode(6);
	root->right->right=newnode(7);
	leftview(root);
}
