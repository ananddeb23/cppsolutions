#include<iostream>
using namespace std;
struct node{
	int data;
	node * next;
};
struct node* newnode(int data){
	struct node * temp=new node;
	temp->data=data;
	temp->next=NULL;
	return temp;
}
void nthlastnode( node* head,int n){
	node *t1=head;
	node *t2=head;
	while(n-- && t1!=NULL){
		t1=t1->next;
	}
	if(t1==NULL){
		cout<<" Length of linked list not enough \n";
		return ;
	}
	while(t1!=NULL){
		t1=t1->next;
		t2=t2->next;
	}
	cout<<t2->data<<endl;
	
	
}
int main(){
	struct node * head=newnode(1);
	head->next=newnode(2);
	head->next->next=newnode(3);
	head->next->next->next=newnode(4);
	head->next->next->next->next=newnode(5);
	head->next->next->next->next->next=newnode(6);
	nthlastnode(head,2);
	return 0;
}
