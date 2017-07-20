#include<iostream>
using namespace std;

int main(){
	
	//int ar[]={-2,-3,4,-1,-2,1,5,-3};
	int ar[]={-2,0,4,0,-1,0,-5,-3};
	int len=sizeof(ar)/sizeof(ar[0]);
	cout<<len<<endl;
	int start=0,end=0,s=0;
	int pro_so_far=1,max_ending_here=1;
	for(int i=0;i<len;i++){
		
		max_ending_here*=ar[i];
		if(pro_so_far<max_ending_here && max_ending_here!=0){
			pro_so_far=max_ending_here;
			end=i;
			start=s;
		}
		if(max_ending_here==0){
			s=i+1;
			max_ending_here=1;
		}
		
		
		
	}
	cout<<start<<endl<<end<<endl<<pro_so_far;
	
	
	
	
return 0;}
