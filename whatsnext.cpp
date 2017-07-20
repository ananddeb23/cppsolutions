#include<iostream>
#include<math.h>
using namespace std;

int main(){
	int fl=1;
 do{
 	int a,b,c;
 	cin>>a>>b>>c;
 	if(a==0 && b==0 && c==0){
 		fl=0;
 		break;
 	}
 	else{
 		float b1=b; float c1=c,a1=a;
 		if(b==0 && c==0){
 			cout<<"GP "<<0<<endl;
 		}
 		else if((b-a)==(c-b)){
 			cout<<"AP "<<c+(c-b)<<endl;
 		}
 		else {
 			cout<<"GP "<<c*c/b<<endl;
 		}
 	}
 }while(fl==1);
	
}
