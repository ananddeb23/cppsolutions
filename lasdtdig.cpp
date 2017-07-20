#include<iostream>
using namespace std;

int main(){
  long ar2[4]={2,4,8,6},ar3[4]={3,9,7,1},ar4[2]={4,6},ar5[2]={5,0},ar7[4]={7,9,3,1},ar8[4]={8,4,2,6},ar9[2]={9,1};
  long ar[9][4]={
  
  
  {0,0,0,0},{0,0,0,0},{2,4,8,6},{3,9,7,1},{0,0,0,0},{0,0,0,0},{0,0,0,0},{7,9,3,1},{8,4,2,6}};
  
  
  int t;
  cin>>t;
  for(int x=0;x<t;x++){
  	long a,b;
  	cin>>a>>b;
  	
  	 if(a%10==2 || a%10==3 ||a%10==4|| a%10==7|| a%10==8){
  	 	long id=b%4-1<0?3:b%4-1;
  		cout<<ar[a%10][id]<<endl;
  	}
  	
  	else if(a%10==9){
  		long id=b%2==0?0:1;
  		cout<<ar9[id]<<endl;
  	}
  	else{
  		cout<<(b==0?1:a%10)<<endl;
  	}
  	
  	
  	
  	
  }
  
  
  return 0;
	
	
}
