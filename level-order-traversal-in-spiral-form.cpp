#include<iostream>
#include<stdlib.h>
#include<queue>
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
void spiralorderlevel(node * root){
	if(root==NULL)
	return;
	
	queue<node *>q;
	q.push(root);
	int turn=0;
	while(!q.empty()){
		node *t1=q.front();
		q.pop();
		cout<<t1->data<<" ";
		if(t1->right!=NULL){
				q.push(t1->right);
			
			}
			if(t1->left!=NULL){
				q.push(t1->left);
			}
			
	
	}
	cout<<endl;
}
int main(){
	struct node * root=newnode(1);
	root->left=newnode(2);
	root->right=newnode(3);
	root->left->left=newnode(7);
	root->left->right=newnode(6);
	//root->left->left->right=newnode(8);
	root->right->left=newnode(5);
	root->right->right=newnode(4);
	spiralorderlevel(root);
}
