#include<iostream>
#include<set>
#include<algorithm>
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
void loopdetect(struct node * head){
	node * slow=head;
	node * fast=head;
	slow=slow->next;
	fast=fast->next->next;
	while(slow!=fast && slow!=NULL && fast!=NULL){
		fast=fast->next->next;
		slow=slow->next;
	}
	if(slow==fast){
		cout<<" Loop detected\n";
		//cout<<"\n VAlue : "<<fast->data<<endl;
	}
}
void loopbreak(struct node **head){
	node *t=*head;
	set<node *>st;
	//st.insert(t);
	//t=t->next;
	while(st.find(t->next)==st.end()){
		st.insert(t);
		t=t->next;
	}
	cout<<" loop connecting "<<t->data<<" and "<<t->next->data<<endl;
	t->next=NULL;
	
	
}
void printlst(struct node * head){
	node * t=head;
	while(t!=NULL){
		cout<<t->data<<" ";
		t=t->next;
	}
	cout<<endl;
}

int main(){
	struct node * head=newnode(1);
	head->next=newnode(2);
	head->next->next=newnode(3);
	head->next->next->next=newnode(4);
	head->next->next->next->next=newnode(5);
	head->next->next->next->next->next=newnode(6);
	(head->next->next->next->next->next->next)=(head->next);
	//rotate(&head,4);
	//printlst(head);
	loopdetect(head);
	loopbreak(&head);
	return 0;
}
