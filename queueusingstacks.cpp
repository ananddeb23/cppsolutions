#include<iostream>
#include<stack>
using namespace std;
stack<int> s1;
stack<int> s2;


void enq(int t){
	s1.push(t);
	
}
int dnq(){
  if(s1.empty()&& s2.empty()){
		return -9999;//  Both the stacks are empty meaning underflow
 }
  if(s2.empty()){
  	while(!s1.empty()){
  		int t=s1.top();
  		s1.pop();
  		s2.push(t);
  	}
  	
  }	
  
  int ret=s2.top();
  s2.pop();
  cout<<endl;
  	return ret;
}
int main(){
	



enq(1);
enq(2);
enq(3);
cout<<dnq();
enq(4);
enq(5);
cout<<dnq();
enq(6);
enq(7);
cout<<dnq();
enq(8);
	

	return 0;
}


