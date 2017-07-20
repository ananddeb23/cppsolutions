#include<iostream>
#include<queue>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

struct Node{
	int data;
	Node *left;
	Node *right;
	
};

struct Node* newNode(int n){
	Node *temp=new Node();
	temp->data=n;
	temp->left=NULL;
	temp->right=NULL;
	return temp;
}
 int turn=1;
void leftview(Node *root){
	if(root==NULL){
		return ;
	}
	queue<Node *>q;
	q.push(root);
	while(!q.empty()){
		Node *t1=q.front();
		q.pop();
		if(turn==0){
		turn =1;
		cout<<t1->data<<endl;
		cout<<"turn "<< turn <<endl;
		}
		if(turn ==1){
			turn =0;
			cout<<"turn "<< turn <<endl;
		}
		if(t1->left!=NULL){
			q.push(t1->left);
		}
			if(t1->right!=NULL){
			q.push(t1->right);
		}
	}
	
}
int main(){

	
	struct Node *root = newNode(12);
    root->left = newNode(10);
    root->right = newNode(30);
    root->right->left = newNode(25);
    root->right->right = newNode(40);
 
    leftview(root);
	
	
	
	
	//leftview(root);
	
}
