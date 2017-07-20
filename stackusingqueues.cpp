#include<iostream>
#include<queue>
using namespace std;
queue<int> s1;
queue<int> s2;


void psh(int n){
	s1.push(n);
	
	
	
}
void transfr1(){
	if(!s1.empty()){
	int t=s1.front();
	s1.pop();
	transfr1();
	s2.push(t);
	}
	else{
		return ;
	}
}
void transfr2(){
	if(!s2.empty()){
		int t=s2.front();
		s2.pop();
		//s3.push(t);
		transfr2();
		transfr1();
		s2.push(t);
		//s3.pop();
	}
	else{
		return;
	}
	
	
	
}

int pop1(){
	if(s1.empty()&& s2.empty()){
		return -9999;// Both queue empty meaning underflow;
	}
	if(!s1.empty()){
	
	if(s2.empty()){
		transfr1();}
	else{
		transfr2();
	}	
	
	
	}
	int t=s2.front();
	s2.pop();
	return t;
	
	
	
}
int main(){
	
	psh(1);
	psh(2);
	cout<<pop1()<<endl;
	cout<<pop1()<<endl;
	psh(3);
	psh(4);
	psh(5);
	cout<<pop1()<<endl;
	cout<<pop1()<<endl;
	psh(6);
	psh(7);
	psh(8);
	cout<<pop1()<<endl;
	cout<<pop1()<<endl;
		psh(61);
	psh(72);
	psh(83);
	cout<<pop1()<<endl;
	cout<<pop1()<<endl;
	cout<<pop1()<<endl;
	cout<<pop1()<<endl;
	cout<<pop1()<<endl;
	cout<<pop1()<<endl;

	
	
	
	
	
}

