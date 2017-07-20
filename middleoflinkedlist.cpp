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
void mid( node* head){
	node *t1=head;
	node *t2=head;
	while(t1!=NULL){
		t1=t1->next->next;
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
	mid(head);
	return 0;
}
