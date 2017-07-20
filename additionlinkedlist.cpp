#include<iostream>
using namespace std;

struct node{
	int data;
	node *next;
};

struct node * newnode(int d){
	
	node * temp=new node;
	temp->data=d;
	temp->next=NULL;
	
	
	return temp;
}
int helpsm(node *head1,node *head2,node *head3){

	if(head1->next==NULL && head2->next==NULL){
		int t=head1->data+head2->data;
		head3->data=t%10;
		return t/10;
	}
	else{
		int t=head1->data+head2->data;
		
		head3->data=(helpsm(head1->next,head2->next,head3->next)+t)%10;
		return t/10;
	}
}
void sm(node * head1,node * head2){
	int l1=0,l2=0;
	node *t1=head1;node *t2=head2;
	while(t1!=NULL)
	{
		l1++;
		t1=t1->next;
	}
	while(t2!=NULL)
	{
		l2++;
		t2=t2->next;
	}
	if(l1 ==l2){
		 struct node *head3=newnode(0);
node *t33=head3;
  while(l1>0){
t33->next=newnode(0);
t33=t33->next;
}
	
	 int l=	helpsm(head1,head2,head3);
		node *t3=head3;
		t3->data+=l;
		while(t3!=NULL){
			cout<<t3->data<<" ";
			t3=t3->next;
		}
	}
}
int main(){
	
	 struct node *head1=newnode(1);
	 head1->next=newnode(4);
	 head1->next->next=newnode(5);
	 
	 struct node *head2=newnode(2);
	 head2->next=newnode(4);
	 head2->next->next=newnode(7);
	 sm(head1,head2);
	return 0;
}
