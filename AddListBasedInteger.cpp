#include<iostream>
#include <vector>
using namespace std;
struct node{
	
	int data;
	node *next;
	
};
void insertnode(node *head,int val){
	
	while(head->next!=0){
		head=head->next;
	}
	head->next=new node;
	head->next->next=0;
	head->next->data=val;
	//cout<<" Insertion done!";
	
}
void calc(node *h1,node *h2){
	int carry=0;
	node *t1=h1;
	node *t2=h2;
	node *t3=new node;
	int flagt1=1,flagt2=1;
	t3->next=0;
	int count=0;
	int sum;
	do{
		sum=carry;
		if(flagt1==1){
			sum+=t1->data;
			if(t1->next==0)
			flagt1=0;
			
			t1=t1->next;
		}
		if(flagt2==1){
			sum+=t2->data;
			if(t2->next==0)
			flagt2=0;
			t2=t2->next;
		}
		carry=sum/10;
		sum=sum%10;
		if(count==0){
			t3->data=sum;
			count=1;
		}else{
		
		insertnode(t3,sum);
	}}while(flagt1==1 || flagt2==1);
	if(carry!=0){
		insertnode(t3,carry);
	}
	//cout<<" Im here";
	node *t4=t3;
	while(t4->next!=0){
		cout<<t4->data<<"->";
		t4=t4->next;
	}
	cout<<t4->data;
	cout<<endl;
	
	
	
}
int main(){
	
	node *head=new node;
	head->data=3;
	head->next=0;
	insertnode(head,1);
	insertnode(head,4);
	insertnode(head,1);
	insertnode(head,4);
	insertnode(head,3);
	insertnode(head,9);	
	insertnode(head,9);
	insertnode(head,5);
	insertnode(head,1);
	insertnode(head,5);
	node *tg=head;
	while(tg->next!=0){
		cout<<tg->data<<" ";
		tg=tg->next;
	}
	cout<<tg->data<<"\n";
	//cout<<endl;
	int gh;
	/*cin>>gh;*/
	node *head1=new node;
	head1->data=7;
	head1->next=0;

	insertnode(head1,0);
	insertnode(head1,9);
	insertnode(head1,1);
	insertnode(head1,5);
	insertnode(head1,6);
	insertnode(head1,7);
	insertnode(head1,8);
	node *tg1=head1;
	while(tg1->next!=0){
		cout<<tg1->data<<" ";
		tg1=tg1->next;
	}
	cout<<tg->data<<"\n";
	//cin>>gh;
	calc(head,head1);
	
	return 0;
}
