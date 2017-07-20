#include<iostream>
using namespace std;


int main(){
int ar[]={0,0,0,0,1,0,1,0,1,0,0,1,1,1,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,1,1,1,0,1};	


int i=0;int l0,l1;
if(ar[i]==0){
	l1=0;
	l0=1;
}
else{
	l1=1;
	l0=0;
}
while(i<33){
	if(ar[i]+ar[i+1]==1){
		i++;
		
	}
	else{
		if(ar[i+1]==0){
			if(l1<(i+2)){
			
			l1=i+2;}
			while(l1<34 && ar[l1]!=1 ){
				l1++;
			}
			if(l1<34){
			ar[i+1]=1;
			ar[l1]=0;
		}
		else{
			goto fin;
		}
		}
		else{
			if(l0<i+2){
				
			l0=i+2;
			}
						
			while(l0<34 && ar[l0]!=0 ){
				l0++;
			}
			if(l0<34){
			ar[i+1]=0;
			ar[l0]=1;
		}
			else{
			goto fin;
		}
			
		}
		
	}
	
	
	
}

fin: for(int x=0;x<34;x++){
	cout<<ar[x]<<",";
}
cout<<endl;
	
	
	
	return 0;
}
